#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IHAJEPBCCFP;
namespace RPG::GameCore { class FiveDimSplineMoveConfig; }

#define PEJPAFPFEDA_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C9E7700)
#define PEJPAFPFEDA_CTOR_OFFSET UNITYSDK_OFFSET(0x1C9E77B0)

	class PEJPAFPFEDA : public ::System::Object
	{
	public:
		::RPG::GameCore::FiveDimSplineMoveConfig* EABKOHGCHFP; // 0x10
		::IHAJEPBCCFP* NNANJMDMAOC; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEJPAFPFEDA_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEJPAFPFEDA_CLEAR_OFFSET))(this);
		}

	};
