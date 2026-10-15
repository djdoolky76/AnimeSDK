#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ExeCode.h"
#include "unitysdk/System/Object.h"
class KGPCBBIOGLB;
namespace System { class Object; }

#define CDPCDCCGEJN_CFLILJECMKA_CTOR_OFFSET UNITYSDK_OFFSET(0xC777D70)

	class CDPCDCCGEJN_CFLILJECMKA : public ::System::Object
	{
	public:
		::System::Object* NLFCABFPJHD; // 0x10
		::KGPCBBIOGLB* FJCAKOIDONG; // 0x18
		::RPG::Client::ExeCode MEPFOEEGBEA; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDPCDCCGEJN_CFLILJECMKA_CTOR_OFFSET))(this);
		}

	};
