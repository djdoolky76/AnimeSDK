#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IGOGKCCOIIF;
namespace System { class Object; }

#define IGOGKCCOIIF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E628610)
#define IGOGKCCOIIF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E628650)
#define IGOGKCCOIIF___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E628660)

inline static constexpr unsigned int IGOGKCCOIIF___c_TypeDefinitionIndex = 29953;

	class IGOGKCCOIIF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4C4A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IGOGKCCOIIF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGOGKCCOIIF___C_CTOR_OFFSET))(this);
		}

		::IGOGKCCOIIF* __cctor_b__33_0()
		{
			return ((::IGOGKCCOIIF*(*)(::PVOID))((::PBYTE)hIl2Cpp + IGOGKCCOIIF___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
