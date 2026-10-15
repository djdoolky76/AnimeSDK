#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OPAOIBLFJOM;
namespace System { class Object; }

#define OPAOIBLFJOM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEDD930)
#define OPAOIBLFJOM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEDD970)
#define OPAOIBLFJOM___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1DEDD980)

inline static constexpr unsigned int OPAOIBLFJOM___c_TypeDefinitionIndex = 28795;

	class OPAOIBLFJOM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2F900);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OPAOIBLFJOM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPAOIBLFJOM___C_CTOR_OFFSET))(this);
		}

		::OPAOIBLFJOM* __cctor_b__28_0()
		{
			return ((::OPAOIBLFJOM*(*)(::PVOID))((::PBYTE)hIl2Cpp + OPAOIBLFJOM___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
