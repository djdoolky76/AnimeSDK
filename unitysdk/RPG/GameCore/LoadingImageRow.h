#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LoadingImageRow; }
namespace System { class String; }

#define RPG_GAMECORE_LOADINGIMAGEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7BEEC0)
#define RPG_GAMECORE_LOADINGIMAGEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D7BE950)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LoadingImageRow_TypeDefinitionIndex = 13987;

	class LoadingImageRow : public ::System::Object
	{
	public:
		::System::String* ImagePath; // 0x10
		::System::UInt32 ID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOADINGIMAGEROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::LoadingImageRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LoadingImageRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOADINGIMAGEROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
