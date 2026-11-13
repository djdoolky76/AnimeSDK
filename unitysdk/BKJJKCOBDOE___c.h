#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BKJJKCOBDOE;
namespace System { class Object; }

#define BKJJKCOBDOE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FC5D610)
#define BKJJKCOBDOE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FC5D640)
#define BKJJKCOBDOE___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1FC5D650)

inline static constexpr unsigned int BKJJKCOBDOE___c_TypeDefinitionIndex = 31892;

	class BKJJKCOBDOE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x56F30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BKJJKCOBDOE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKJJKCOBDOE___C_CTOR_OFFSET))(this);
		}

		::BKJJKCOBDOE* __cctor_b__33_0()
		{
			return ((::BKJJKCOBDOE*(*)(::PVOID))((::PBYTE)hIl2Cpp + BKJJKCOBDOE___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
