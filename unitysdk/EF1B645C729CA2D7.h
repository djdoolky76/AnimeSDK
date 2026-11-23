#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define EF1B645C729CA2D7_A3185579781A8854_OFFSET UNITYSDK_OFFSET(0x3845070)
#define EF1B645C729CA2D7_E33FB0AE69B74E70_OFFSET UNITYSDK_OFFSET(0x3844EB0)
#define EF1B645C729CA2D7_EC2AADC3420092FC_OFFSET UNITYSDK_OFFSET(0x3844FD0)
#define EF1B645C729CA2D7_F70B5A136F82B46F_OFFSET UNITYSDK_OFFSET(0x3845150)
#define EF1B645C729CA2D7_F7B0A23335A3DB16_OFFSET UNITYSDK_OFFSET(0x3845510)
#define EF1B645C729CA2D7_FCC84D1E3850E39F_OFFSET UNITYSDK_OFFSET(0x38451E0)
#define EF1B645C729CA2D7__CTOR_OFFSET UNITYSDK_OFFSET(0x3845470)

inline static constexpr unsigned int EF1B645C729CA2D7_TypeDefinitionIndex = 17987;

class EF1B645C729CA2D7 : public ::System::Object
{
public:
	static ::EF1B645C729CA2D7** StaticGet_F2EC524D6D748B5F()
	{
		return (::EF1B645C729CA2D7**)Il2CppClass::FromTypeDefinitionIndex(EF1B645C729CA2D7_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	::System::Text::StringBuilder* B575A30297CEC312; // 0x10
	::System::Int32 EC6FB3EAC6D9B902; // 0x18
	::System::Byte _padding0[0x4];
	::System::String* AA35B3CF6C6E2C17; // 0x20
	::System::Boolean AC1FD02A7B224D68; // 0x28

	::System::Void EC2AADC3420092FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EF1B645C729CA2D7_EC2AADC3420092FC_OFFSET))(this);
	}

	static ::EF1B645C729CA2D7* F7B0A23335A3DB16()
	{
		return ((::EF1B645C729CA2D7*(*)())((::PBYTE)hIl2Cpp + EF1B645C729CA2D7_F7B0A23335A3DB16_OFFSET))();
	}

	::System::Int64 F70B5A136F82B46F()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + EF1B645C729CA2D7_F70B5A136F82B46F_OFFSET))(this);
	}

	::System::Void FCC84D1E3850E39F(::System::String* E7D863F1D3EF3368, ::System::Boolean A237F7934A66D67E)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + EF1B645C729CA2D7_FCC84D1E3850E39F_OFFSET))(this, E7D863F1D3EF3368, A237F7934A66D67E);
	}

	::System::String* A3185579781A8854()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EF1B645C729CA2D7_A3185579781A8854_OFFSET))(this);
	}

	::System::Void E33FB0AE69B74E70(::System::String* E7D863F1D3EF3368)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EF1B645C729CA2D7_E33FB0AE69B74E70_OFFSET))(this, E7D863F1D3EF3368);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EF1B645C729CA2D7__CTOR_OFFSET))(this);
	}
};
