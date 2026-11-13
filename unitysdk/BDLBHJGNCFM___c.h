#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BDLBHJGNCFM;
namespace System { class Object; }

#define BDLBHJGNCFM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F9F00D0)
#define BDLBHJGNCFM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F9F0110)
#define BDLBHJGNCFM___C___CCTOR_B__58_0_OFFSET UNITYSDK_OFFSET(0x1F9F0120)

inline static constexpr unsigned int BDLBHJGNCFM___c_TypeDefinitionIndex = 30591;

	class BDLBHJGNCFM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x47460);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BDLBHJGNCFM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDLBHJGNCFM___C_CTOR_OFFSET))(this);
		}

		::BDLBHJGNCFM* __cctor_b__58_0()
		{
			return ((::BDLBHJGNCFM*(*)(::PVOID))((::PBYTE)hIl2Cpp + BDLBHJGNCFM___C___CCTOR_B__58_0_OFFSET))(this);
		}

	};
