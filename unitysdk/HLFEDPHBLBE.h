#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

#define HLFEDPHBLBE_CTOR_OFFSET UNITYSDK_OFFSET(0x15D52160)

inline static constexpr unsigned int HLFEDPHBLBE_TypeDefinitionIndex = 55354;

	class HLFEDPHBLBE : public ::System::Object
	{
	public:
		::System::Single FIJLEDEKBJP; // 0x10
		::System::Boolean INFEKIKKPCB; // 0x14
		::System::Boolean BJKJILAKNFD; // 0x15
		::System::Boolean GNDCCBNILML; // 0x16
		::System::Byte _padding0[0x1];
		::RPG::Client::TextID NFCHLOMEGFA; // 0x18
		::System::Int32 HCDEOKNIGKG; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLFEDPHBLBE_CTOR_OFFSET))(this);
		}

	};
