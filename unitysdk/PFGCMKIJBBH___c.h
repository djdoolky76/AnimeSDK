#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PFGCMKIJBBH;
namespace System { class Object; }

#define PFGCMKIJBBH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x20678770)
#define PFGCMKIJBBH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x206787B0)
#define PFGCMKIJBBH___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x206787C0)

inline static constexpr unsigned int PFGCMKIJBBH___c_TypeDefinitionIndex = 30322;

	class PFGCMKIJBBH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x358E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PFGCMKIJBBH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFGCMKIJBBH___C_CTOR_OFFSET))(this);
		}

		::PFGCMKIJBBH* __cctor_b__23_0()
		{
			return ((::PFGCMKIJBBH*(*)(::PVOID))((::PBYTE)hIl2Cpp + PFGCMKIJBBH___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
