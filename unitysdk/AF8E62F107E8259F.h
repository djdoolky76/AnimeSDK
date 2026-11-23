#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class E38A0A376336C717;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AF8E62F107E8259F_A2F3AE1FF3E1C30E_OFFSET UNITYSDK_OFFSET(0x1972DE0)
#define AF8E62F107E8259F_A5557FF4F78E1AC9_OFFSET UNITYSDK_OFFSET(0x169C070)
#define AF8E62F107E8259F_A652BE0161F057E7_OFFSET UNITYSDK_OFFSET(0x16A7BC0)
#define AF8E62F107E8259F_A765A1D14770A303_OFFSET UNITYSDK_OFFSET(0x27E64A0)
#define AF8E62F107E8259F_E3BE1F36747EAE8E_OFFSET UNITYSDK_OFFSET(0x16A7C80)
#define AF8E62F107E8259F_E69FE30E8B3369D7_OFFSET UNITYSDK_OFFSET(0x1972DF0)
#define AF8E62F107E8259F_E7E5F940FB7B09FD_OFFSET UNITYSDK_OFFSET(0x17395E0)
#define AF8E62F107E8259F_EE0620E0E22168D5_OFFSET UNITYSDK_OFFSET(0x165A410)
#define AF8E62F107E8259F_F502725F529EAEC0_OFFSET UNITYSDK_OFFSET(0x17F35A0)
#define AF8E62F107E8259F_FEA1B4A841E4C839_OFFSET UNITYSDK_OFFSET(0x16BD320)
#define AF8E62F107E8259F__CTOR_OFFSET UNITYSDK_OFFSET(0x27E6570)

inline static constexpr unsigned int AF8E62F107E8259F_TypeDefinitionIndex = 16769;

class AF8E62F107E8259F : public ::System::Object
{
public:
	::System::Int32 AF02034CA6CFA3D9; // 0x10
	::System::Byte _padding0[0x4];
	::System::Collections::Generic::List_1<::System::UInt32>* FE4240CB502BCA38; // 0x18
	::System::Collections::Generic::List_1<::System::Int32>* B57BF5275B8E9B2E; // 0x20
	::System::Collections::Generic::List_1<::E38A0A376336C717*>* BFAA401C4CC169A6; // 0x28
	::System::Collections::Generic::List_1<::System::Boolean>* B1EB9A0795A94F09; // 0x30
	::System::Collections::Generic::List_1<::System::UInt32>* ED7BEF2FFE234F5C; // 0x38
	::System::Int32 AC2F3DB693747BB6; // 0x40

	::System::Collections::Generic::List_1<::System::UInt32>* F502725F529EAEC0()
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AF8E62F107E8259F_F502725F529EAEC0_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Boolean>* E7E5F940FB7B09FD()
	{
		return ((::System::Collections::Generic::List_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AF8E62F107E8259F_E7E5F940FB7B09FD_OFFSET))(this);
	}

	::System::Int32 A652BE0161F057E7()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AF8E62F107E8259F_A652BE0161F057E7_OFFSET))(this);
	}

	::System::Void A765A1D14770A303()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AF8E62F107E8259F_A765A1D14770A303_OFFSET))(this);
	}

	::System::Void E3BE1F36747EAE8E(::System::Int32 E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AF8E62F107E8259F_E3BE1F36747EAE8E_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Int32 A2F3AE1FF3E1C30E()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AF8E62F107E8259F_A2F3AE1FF3E1C30E_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AF8E62F107E8259F__CTOR_OFFSET))(this);
	}

	::System::Void E69FE30E8B3369D7(::System::Int32 E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AF8E62F107E8259F_E69FE30E8B3369D7_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Collections::Generic::List_1<::E38A0A376336C717*>* A5557FF4F78E1AC9()
	{
		return ((::System::Collections::Generic::List_1<::E38A0A376336C717*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AF8E62F107E8259F_A5557FF4F78E1AC9_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::UInt32>* EE0620E0E22168D5()
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AF8E62F107E8259F_EE0620E0E22168D5_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* FEA1B4A841E4C839()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AF8E62F107E8259F_FEA1B4A841E4C839_OFFSET))(this);
	}
};
