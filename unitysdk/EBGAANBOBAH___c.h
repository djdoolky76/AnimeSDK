#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EBGAANBOBAH;
namespace System { class Object; }

#define EBGAANBOBAH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E234E50)
#define EBGAANBOBAH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E234E90)
#define EBGAANBOBAH___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E234EA0)

inline static constexpr unsigned int EBGAANBOBAH___c_TypeDefinitionIndex = 26409;

	class EBGAANBOBAH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4A940);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EBGAANBOBAH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBGAANBOBAH___C_CTOR_OFFSET))(this);
		}

		::EBGAANBOBAH* __cctor_b__28_0()
		{
			return ((::EBGAANBOBAH*(*)(::PVOID))((::PBYTE)hIl2Cpp + EBGAANBOBAH___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
