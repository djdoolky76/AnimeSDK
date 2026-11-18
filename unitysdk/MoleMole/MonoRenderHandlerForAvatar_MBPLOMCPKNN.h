#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonoRenderHandlerForAvatar_OHJFEKAOPOE.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_MBPLOMCPKNN__CTOR_OFFSET UNITYSDK_OFFSET(0x139F80A0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoRenderHandlerForAvatar_MBPLOMCPKNN_TypeDefinitionIndex = 52705;

	class MonoRenderHandlerForAvatar_MBPLOMCPKNN : public ::System::Object
	{
	public:
		::System::Int32 DABJIHHDFNO; // 0x10
		::System::UInt32 ODHGEDHALMO; // 0x14
		::MoleMole::MonoRenderHandlerForAvatar_OHJFEKAOPOE OBNIAHNMHPF; // 0x18

		::System::Void _ctor(::MoleMole::MonoRenderHandlerForAvatar_OHJFEKAOPOE OBNIAHNMHPF, ::System::UInt32 ODHGEDHALMO, ::System::Int32 DABJIHHDFNO)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoRenderHandlerForAvatar_OHJFEKAOPOE, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_MBPLOMCPKNN__CTOR_OFFSET))(this, OBNIAHNMHPF, ODHGEDHALMO, DABJIHHDFNO);
		}
	};
}
