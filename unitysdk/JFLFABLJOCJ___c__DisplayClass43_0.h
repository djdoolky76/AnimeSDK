#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/OpenWorld/StreamingLightEnum.h"
#include "unitysdk/System/Object.h"
class JFLFABLJOCJ;
namespace RPG::Client { class IAssetOperation; }

#define JFLFABLJOCJ___C__DISPLAYCLASS43_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1663FEF0)
#define JFLFABLJOCJ___C__DISPLAYCLASS43_0__ASYNCLOAD_B__0_OFFSET UNITYSDK_OFFSET(0x16641DC0)

inline static constexpr unsigned int JFLFABLJOCJ___c__DisplayClass43_0_TypeDefinitionIndex = 49571;

	class JFLFABLJOCJ___c__DisplayClass43_0 : public ::System::Object
	{
	public:
		::JFLFABLJOCJ* __4__this; // 0x10
		::RPG::Client::OpenWorld::StreamingLightEnum state; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFLFABLJOCJ___C__DISPLAYCLASS43_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _AsyncLoad_b__0(::RPG::Client::IAssetOperation* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IAssetOperation*))((::PBYTE)hIl2Cpp + JFLFABLJOCJ___C__DISPLAYCLASS43_0__ASYNCLOAD_B__0_OFFSET))(this, a1);
		}

	};
