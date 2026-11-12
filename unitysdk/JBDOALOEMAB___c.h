#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KAKADGHNMFK;
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define JBDOALOEMAB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xB8A1ED0)
#define JBDOALOEMAB___C_CTOR_OFFSET UNITYSDK_OFFSET(0xB8A1F10)
#define JBDOALOEMAB___C__SELECTENTITYIDS_B__5_0_OFFSET UNITYSDK_OFFSET(0xB8A1F20)

inline static constexpr unsigned int JBDOALOEMAB___c_TypeDefinitionIndex = 80372;

	class JBDOALOEMAB___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::KAKADGHNMFK*, ::System::Int32>** StaticGet___9__5_0()
		{
			return (::System::Func_2<::KAKADGHNMFK*, ::System::Int32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5E980);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5E988);
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
