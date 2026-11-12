#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AFJAOKMCFEB;
namespace System { class Object; }

#define AFJAOKMCFEB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F3D2DD0)
#define AFJAOKMCFEB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F3D2E10)
#define AFJAOKMCFEB___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F3D2E20)

inline static constexpr unsigned int AFJAOKMCFEB___c_TypeDefinitionIndex = 27057;

	class AFJAOKMCFEB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3AD40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AFJAOKMCFEB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFJAOKMCFEB___C_CTOR_OFFSET))(this);
		}

		::AFJAOKMCFEB* __cctor_b__28_0()
		{
			return ((::AFJAOKMCFEB*(*)(::PVOID))((::PBYTE)hIl2Cpp + AFJAOKMCFEB___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
