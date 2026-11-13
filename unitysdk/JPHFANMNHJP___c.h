#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JPHFANMNHJP;
namespace System { class Object; }

#define JPHFANMNHJP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F8E0710)
#define JPHFANMNHJP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F8E0750)
#define JPHFANMNHJP___C___CCTOR_B__32_0_OFFSET UNITYSDK_OFFSET(0x1F8E0760)

inline static constexpr unsigned int JPHFANMNHJP___c_TypeDefinitionIndex = 26127;

	class JPHFANMNHJP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x68F90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JPHFANMNHJP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPHFANMNHJP___C_CTOR_OFFSET))(this);
		}

		::JPHFANMNHJP* __cctor_b__32_0()
		{
			return ((::JPHFANMNHJP*(*)(::PVOID))((::PBYTE)hIl2Cpp + JPHFANMNHJP___C___CCTOR_B__32_0_OFFSET))(this);
		}

	};
