#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CBDMGEGELFM;
namespace System { class Object; }

#define CBDMGEGELFM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F328540)
#define CBDMGEGELFM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F328570)
#define CBDMGEGELFM___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F328580)

inline static constexpr unsigned int CBDMGEGELFM___c_TypeDefinitionIndex = 33924;

	class CBDMGEGELFM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x592F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CBDMGEGELFM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBDMGEGELFM___C_CTOR_OFFSET))(this);
		}

		::CBDMGEGELFM* __cctor_b__28_0()
		{
			return ((::CBDMGEGELFM*(*)(::PVOID))((::PBYTE)hIl2Cpp + CBDMGEGELFM___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
