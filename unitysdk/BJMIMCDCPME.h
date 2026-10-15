#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FourRotateVoxel/InputSignalType.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define BJMIMCDCPME_CTOR_OFFSET UNITYSDK_OFFSET(0x1C8BC120)

	class BJMIMCDCPME : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<::RPG::Client::LittleGame::FourRotateVoxel::InputSignalType>* FCCACCAJHBL; // 0x10
		static ::System::Int32* StaticGet_FGGNLDMCMNA()
		{
			return (::System::Int32*)UnitySDK::FromName("", "BJMIMCDCPME")->GetStaticField(0x3A30);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJMIMCDCPME_CTOR_OFFSET))(this);
		}

	};
