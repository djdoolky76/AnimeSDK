#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LMLNJFEMOAI;
namespace System { class Object; }

#define LMLNJFEMOAI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FF57B30)
#define LMLNJFEMOAI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FF57B70)
#define LMLNJFEMOAI___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1FF57B80)

inline static constexpr unsigned int LMLNJFEMOAI___c_TypeDefinitionIndex = 26256;

	class LMLNJFEMOAI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x43750);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LMLNJFEMOAI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMLNJFEMOAI___C_CTOR_OFFSET))(this);
		}

		::LMLNJFEMOAI* __cctor_b__28_0()
		{
			return ((::LMLNJFEMOAI*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMLNJFEMOAI___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
