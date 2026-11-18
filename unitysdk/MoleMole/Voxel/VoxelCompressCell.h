#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_VOXEL_VOXELCOMPRESSCELL_DFKGACCOGBA_OFFSET UNITYSDK_OFFSET(0x13EB2870)
#define MOLEMOLE_VOXEL_VOXELCOMPRESSCELL_EIMBLGGBOGD_OFFSET UNITYSDK_OFFSET(0x13EB27F0)
#define MOLEMOLE_VOXEL_VOXELCOMPRESSCELL__CTOR_OFFSET UNITYSDK_OFFSET(0x13EB27E0)

namespace MoleMole::Voxel
{
	inline static constexpr unsigned int VoxelCompressCell_TypeDefinitionIndex = 81072;

	class VoxelCompressCell : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Byte>* byteArray; // 0x10
		::System::Boolean isEmpty; // 0x18

		::System::Void _ctor(::Il2CppArray<::System::Byte>* GMHJGPODKLM)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MOLEMOLE_VOXEL_VOXELCOMPRESSCELL__CTOR_OFFSET))(this, GMHJGPODKLM);
		}

		::System::Void EIMBLGGBOGD(::System::Int32 ABHBKFJKINO, ::System::Byte LJBPECKCCEA)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Byte))((::PBYTE)hIl2Cpp + MOLEMOLE_VOXEL_VOXELCOMPRESSCELL_EIMBLGGBOGD_OFFSET))(this, ABHBKFJKINO, LJBPECKCCEA);
		}

		::System::Void DFKGACCOGBA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VOXEL_VOXELCOMPRESSCELL_DFKGACCOGBA_OFFSET))(this);
		}
	};
}
