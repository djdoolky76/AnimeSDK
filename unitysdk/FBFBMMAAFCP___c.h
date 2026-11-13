#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FBFBMMAAFCP;
namespace System { class Object; }

#define FBFBMMAAFCP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F892E50)
#define FBFBMMAAFCP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F892E90)
#define FBFBMMAAFCP___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F892EA0)

inline static constexpr unsigned int FBFBMMAAFCP___c_TypeDefinitionIndex = 29918;

	class FBFBMMAAFCP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x40D40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FBFBMMAAFCP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBFBMMAAFCP___C_CTOR_OFFSET))(this);
		}

		::FBFBMMAAFCP* __cctor_b__28_0()
		{
			return ((::FBFBMMAAFCP*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBFBMMAAFCP___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
