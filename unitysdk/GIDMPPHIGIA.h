#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OMJDPLIKJEM;
namespace RPG::GameCore { class FourRotateVoxelLevelEnvConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GIDMPPHIGIA_CTOR_OFFSET UNITYSDK_OFFSET(0x1CAAB920)

	class GIDMPPHIGIA : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::OMJDPLIKJEM*>* PJIAPLDJHDL; // 0x10
		::RPG::GameCore::FourRotateVoxelLevelEnvConfig* EOLEFDMJNNE; // 0x18
		::System::String* NKNKNFNGHJC; // 0x20
		::System::Boolean OJPDDAOJJKC; // 0x28
		::System::Boolean PJGOCPDOAOL; // 0x29
		::System::Byte _padding0[0x2];
		::System::Int32 DKMLGHNPODM; // 0x2C
		::System::Int32 OCPMLIBCHPD; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIDMPPHIGIA_CTOR_OFFSET))(this);
		}

	};
