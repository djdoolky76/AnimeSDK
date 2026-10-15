#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KAKADGHNMFK;
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define JBDOALOEMAB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x165696C0)
#define JBDOALOEMAB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x16569700)
#define JBDOALOEMAB___C__SELECTENTITYIDS_B__5_0_OFFSET UNITYSDK_OFFSET(0x16569710)

inline static constexpr unsigned int JBDOALOEMAB___c_TypeDefinitionIndex = 77637;

	class JBDOALOEMAB___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::KAKADGHNMFK*, ::System::Int32>** StaticGet___9__5_0()
		{
			return (::System::Func_2<::KAKADGHNMFK*, ::System::Int32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6E600);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6E608);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JBDOALOEMAB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBDOALOEMAB___C_CTOR_OFFSET))(this);
		}

		::System::Int32 _SelectEntityIDs_b__5_0(::KAKADGHNMFK* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::KAKADGHNMFK*))((::PBYTE)hIl2Cpp + JBDOALOEMAB___C__SELECTENTITYIDS_B__5_0_OFFSET))(this, a1);
		}

	};
