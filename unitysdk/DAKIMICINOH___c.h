#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DAKIMICINOH;
namespace System { class Object; }

#define DAKIMICINOH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E125870)
#define DAKIMICINOH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1258B0)
#define DAKIMICINOH___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E1258C0)

inline static constexpr unsigned int DAKIMICINOH___c_TypeDefinitionIndex = 26108;

	class DAKIMICINOH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x21B30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DAKIMICINOH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAKIMICINOH___C_CTOR_OFFSET))(this);
		}

		::DAKIMICINOH* __cctor_b__33_0()
		{
			return ((::DAKIMICINOH*(*)(::PVOID))((::PBYTE)hIl2Cpp + DAKIMICINOH___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
