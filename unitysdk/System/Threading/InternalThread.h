#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/F8B13D551D06FE22.h"
#include "unitysdk/System/Threading/FFAF3CD59979CAF4.h"

namespace System { class Object; }

#define SYSTEM_THREADING_INTERNALTHREAD_E3B9ADE28FC9DB0D_OFFSET UNITYSDK_OFFSET(0x3CAB930)
#define SYSTEM_THREADING_INTERNALTHREAD_EA4F0C40EB7536BF_OFFSET UNITYSDK_OFFSET(0x3CAB8D0)
#define SYSTEM_THREADING_INTERNALTHREAD__CTOR_OFFSET UNITYSDK_OFFSET(0x3CAB940)

namespace System::Threading
{
	inline static constexpr unsigned int InternalThread_TypeDefinitionIndex = 10459;

	class InternalThread : public ::F8B13D551D06FE22
	{
	public:
		::System::Int32 A3182FD4DDA2A09E; // 0x10
		::System::Byte _padding0[0x4];
		::System::IntPtr FE4CC799A7EA66C7; // 0x18
		::System::IntPtr FF9ABCB4B88338B4; // 0x20
		::System::IntPtr AAB0C76B4EA24332; // 0x28
		::System::Int32 E4B1CB88E8F773CB; // 0x30
		::System::Int32 B9A6308F869DE8F8; // 0x34
		::System::Threading::FFAF3CD59979CAF4 AD036903E9A68969; // 0x38
		::System::Byte _padding1[0x4];
		::System::Object* A3C081CF82561626; // 0x40
		::System::Int32 F9AB6D5C22B58C63; // 0x48
		::System::Byte _padding2[0x4];
		::System::Int64 AB313FEA98A783F8; // 0x50
		::System::IntPtr F44AFEA04EB6D263; // 0x58
		::System::UIntPtr F207567344DBF23A; // 0x60
		::System::IntPtr EBF30961DD73EC7E; // 0x68
		::System::Object* F128D27CA6994621; // 0x70
		::System::Object* E490DF8ACF62AF7A; // 0x78
		::Il2CppArray<::System::Byte>* BDC066B9C46DB80D; // 0x80
		::System::Int32 F6AAEF5059A6347A; // 0x88
		::System::Byte _padding3[0x4];
		::System::IntPtr B143593C25C0478C; // 0x90
		::System::Int32 E28F410EAB809D37; // 0x98
		::System::Byte _padding4[0x4];
		::System::IntPtr B4117237F8E7D138; // 0xA0
		::System::Boolean EBB47EC620D5FC00; // 0xA8
		::System::Boolean B22AF81F3C91884A; // 0xA9
		::System::Byte _padding5[0x2];
		::System::Int32 E02D74CCD5DA5CAC; // 0xAC
		::System::Byte E11593D0B10E90D1; // 0xB0
		::System::Byte _padding6[0x3];
		::System::Int32 EAA1B1722221A96E; // 0xB4
		::System::Int32 FD3DBEFEE319ADE4; // 0xB8
		::System::Int32 BD08CB85BC97D310; // 0xBC
		::System::IntPtr B0E41AE7A258F81C; // 0xC0
		::System::IntPtr FB2001C0410BD72C; // 0xC8
		::System::IntPtr A16C9D3994241181; // 0xD0
		::System::IntPtr B82CCB1E9D2F281C; // 0xD8
		::System::Int32 A134E5D74404B0AC; // 0xE0
		::System::Byte _padding7[0x4];
		::System::IntPtr E4992F380C6086C6; // 0xE8
		::System::IntPtr EEBE545825F03E4A; // 0xF0
		::System::Int32 EB808108C78E7EF9; // 0xF8
		::System::Byte _padding8[0x4];
		::System::IntPtr F916FFEEC9BB2C63; // 0x100
		::System::IntPtr BFB3322517FADCB0; // 0x108
		::System::IntPtr B0DA906F51911A5F; // 0x110
		::System::IntPtr A1CA496411AEC44B; // 0x118
		::System::IntPtr E0F3319BFCC72B15; // 0x120

		::System::Void EA4F0C40EB7536BF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_INTERNALTHREAD_EA4F0C40EB7536BF_OFFSET))(this);
		}

		::System::Void E3B9ADE28FC9DB0D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_INTERNALTHREAD_E3B9ADE28FC9DB0D_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_INTERNALTHREAD__CTOR_OFFSET))(this);
		}
	};
}
