#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EPFJLNKPEPK;
namespace System { class Object; }

#define EPFJLNKPEPK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2DD120)
#define EPFJLNKPEPK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2DD150)
#define EPFJLNKPEPK___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E2DD160)

inline static constexpr unsigned int EPFJLNKPEPK___c_TypeDefinitionIndex = 31508;

	class EPFJLNKPEPK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x48C10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EPFJLNKPEPK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPFJLNKPEPK___C_CTOR_OFFSET))(this);
		}

		::EPFJLNKPEPK* __cctor_b__28_0()
		{
			return ((::EPFJLNKPEPK*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPFJLNKPEPK___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
