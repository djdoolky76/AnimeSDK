#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

#define HLFEDPHBLBE_CTOR_OFFSET UNITYSDK_OFFSET(0x16CB7CD0)

inline static constexpr unsigned int HLFEDPHBLBE_TypeDefinitionIndex = 56537;

	class HLFEDPHBLBE : public ::System::Object
	{
	public:
		::System::Boolean GNDCCBNILML; // 0x10
		::System::Boolean INFEKIKKPCB; // 0x11
		::System::Boolean BJKJILAKNFD; // 0x12
		::System::Byte _padding0[0x1];
		::System::Int32 HCDEOKNIGKG; // 0x14
		::System::Single FIJLEDEKBJP; // 0x18
		::System::Byte _padding1[0x4];
		::RPG::Client::TextID NFCHLOMEGFA; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLFEDPHBLBE_CTOR_OFFSET))(this);
		}

	};
