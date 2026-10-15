#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BOINNCFONAE;
namespace System { class Object; }

#define BOINNCFONAE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E00ED40)
#define BOINNCFONAE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E00ED80)
#define BOINNCFONAE___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1E00ED90)

inline static constexpr unsigned int BOINNCFONAE___c_TypeDefinitionIndex = 28815;

	class BOINNCFONAE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5E0D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BOINNCFONAE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOINNCFONAE___C_CTOR_OFFSET))(this);
		}

		::BOINNCFONAE* __cctor_b__43_0()
		{
			return ((::BOINNCFONAE*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOINNCFONAE___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
