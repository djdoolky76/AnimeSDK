#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GILBMELHGCB;
namespace System { class Object; }

#define GILBMELHGCB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F7911C0)
#define GILBMELHGCB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F791200)
#define GILBMELHGCB___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F791210)

inline static constexpr unsigned int GILBMELHGCB___c_TypeDefinitionIndex = 34813;

	class GILBMELHGCB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x11FB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GILBMELHGCB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GILBMELHGCB___C_CTOR_OFFSET))(this);
		}

		::GILBMELHGCB* __cctor_b__28_0()
		{
			return ((::GILBMELHGCB*(*)(::PVOID))((::PBYTE)hIl2Cpp + GILBMELHGCB___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
