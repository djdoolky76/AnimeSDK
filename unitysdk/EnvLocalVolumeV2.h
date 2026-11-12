#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnvLocalVolume.h"
class COGBNIGPJPO;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ENVLOCALVOLUMEV2_CTOR_OFFSET UNITYSDK_OFFSET(0x164F81A0)
#define ENVLOCALVOLUMEV2_GETENVIROMENTPROFILESLIST_OFFSET UNITYSDK_OFFSET(0x164F7EA0)
#define ENVLOCALVOLUMEV2_GETENVIROMENTPROFILE_OFFSET UNITYSDK_OFFSET(0x164F7D60)

inline static constexpr unsigned int EnvLocalVolumeV2_TypeDefinitionIndex = 48328;

	class EnvLocalVolumeV2 : public ::EnvLocalVolume
	{
	public:
		::System::String* prof; // 0x78
		::System::Collections::Generic::List_1<::System::String*>* profiles; // 0x80
		::COGBNIGPJPO* KGIMFPHDGMJ; // 0x88
		::System::Collections::Generic::List_1<::COGBNIGPJPO*>* ANANEMEGPMD; // 0x90
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVLOCALVOLUMEV2_CTOR_OFFSET))(this);
		}

		::COGBNIGPJPO* GetEnviromentProfile()
		{
			return ((::COGBNIGPJPO*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVLOCALVOLUMEV2_GETENVIROMENTPROFILE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::COGBNIGPJPO*>* GetEnviromentProfilesList()
		{
			return ((::System::Collections::Generic::List_1<::COGBNIGPJPO*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVLOCALVOLUMEV2_GETENVIROMENTPROFILESLIST_OFFSET))(this);
		}

	};
