#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }

#define DCEHAGKAHFE_CTOR_OFFSET UNITYSDK_OFFSET(0xE2391B0)

inline static constexpr unsigned int DCEHAGKAHFE_TypeDefinitionIndex = 71618;

	class DCEHAGKAHFE : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Object*>* HLJCDHMCPAI; // 0x10
		::RPG::Client::TextID NMAHGFAPENI; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCEHAGKAHFE_CTOR_OFFSET))(this);
		}

	};
