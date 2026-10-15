#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DGEEIJCMHHO;
namespace System { class Object; }

#define DGEEIJCMHHO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1AB800)
#define DGEEIJCMHHO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1AB840)
#define DGEEIJCMHHO___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E1AB850)

inline static constexpr unsigned int DGEEIJCMHHO___c_TypeDefinitionIndex = 29032;

	class DGEEIJCMHHO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x34090);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DGEEIJCMHHO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGEEIJCMHHO___C_CTOR_OFFSET))(this);
		}

		::DGEEIJCMHHO* __cctor_b__23_0()
		{
			return ((::DGEEIJCMHHO*(*)(::PVOID))((::PBYTE)hIl2Cpp + DGEEIJCMHHO___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
