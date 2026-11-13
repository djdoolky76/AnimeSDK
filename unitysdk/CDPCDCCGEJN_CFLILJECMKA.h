#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ExeCode.h"
#include "unitysdk/System/Object.h"
class KGPCBBIOGLB;
namespace System { class Object; }

#define CDPCDCCGEJN_CFLILJECMKA_CTOR_OFFSET UNITYSDK_OFFSET(0x173C0E90)

inline static constexpr unsigned int CDPCDCCGEJN_CFLILJECMKA_TypeDefinitionIndex = 60850;

	class CDPCDCCGEJN_CFLILJECMKA : public ::System::Object
	{
	public:
		::KGPCBBIOGLB* FJCAKOIDONG; // 0x10
		::System::Object* NLFCABFPJHD; // 0x18
		::RPG::Client::ExeCode MEPFOEEGBEA; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDPCDCCGEJN_CFLILJECMKA_CTOR_OFFSET))(this);
		}

	};
