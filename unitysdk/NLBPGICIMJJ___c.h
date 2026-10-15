#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NLBPGICIMJJ;
namespace System { class Object; }

#define NLBPGICIMJJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB631D0)
#define NLBPGICIMJJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB63210)
#define NLBPGICIMJJ___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1EB63220)

	class NLBPGICIMJJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x69640);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NLBPGICIMJJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLBPGICIMJJ___C_CTOR_OFFSET))(this);
		}

		::NLBPGICIMJJ* __cctor_b__33_0()
		{
			return ((::NLBPGICIMJJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + NLBPGICIMJJ___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
