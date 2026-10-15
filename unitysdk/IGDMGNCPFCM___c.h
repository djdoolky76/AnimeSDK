#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IGDMGNCPFCM;
namespace System { class Object; }

#define IGDMGNCPFCM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E64B160)
#define IGDMGNCPFCM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E64B1A0)
#define IGDMGNCPFCM___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E64B1B0)

inline static constexpr unsigned int IGDMGNCPFCM___c_TypeDefinitionIndex = 26177;

	class IGDMGNCPFCM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4AE80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IGDMGNCPFCM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGDMGNCPFCM___C_CTOR_OFFSET))(this);
		}

		::IGDMGNCPFCM* __cctor_b__23_0()
		{
			return ((::IGDMGNCPFCM*(*)(::PVOID))((::PBYTE)hIl2Cpp + IGDMGNCPFCM___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
