#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FourRotateVoxel/FourRotateVoxelGameViewCoord.h"
#include "unitysdk/System/Object.h"
class DNFFEFPKDPC;
class INMMPMDELKE;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BCFLJPCHOEB_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA32800)

inline static constexpr unsigned int BCFLJPCHOEB_TypeDefinitionIndex = 44196;

	class BCFLJPCHOEB : public ::System::Object
	{
	public:
		::INMMPMDELKE* MMEAAFMGGEM; // 0x10
		::INMMPMDELKE* BFCGOELLNIP; // 0x18
		::INMMPMDELKE* HELHNOEDHCM; // 0x20
		::INMMPMDELKE* IJDAJGKLAKH; // 0x28
		::INMMPMDELKE* ILKNBHCIGKE; // 0x30
		::System::Collections::Generic::Dictionary_2<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord, ::System::Collections::Generic::List_1<::DNFFEFPKDPC*>*>* KMBLPGHILHN; // 0x38
		::System::Boolean KAFIFBPDJEJ; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCFLJPCHOEB_CTOR_OFFSET))(this);
		}

	};
