#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define ZXING_PDF417_INTERNAL_BARCODEROW_ADDBAR_OFFSET UNITYSDK_OFFSET(0x20978B00)
#define ZXING_PDF417_INTERNAL_BARCODEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x209787D0)
#define ZXING_PDF417_INTERNAL_BARCODEROW_GETSCALEDROW_OFFSET UNITYSDK_OFFSET(0x20978A30)
#define ZXING_PDF417_INTERNAL_BARCODEROW_SET_OFFSET UNITYSDK_OFFSET(0x20978AD0)

namespace ZXing::PDF417::Internal
{
	inline static constexpr unsigned int BarcodeRow_TypeDefinitionIndex = 7016;

	class BarcodeRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::SByte>* row; // 0x10
		::System::Int32 currentLocation; // 0x18
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_PDF417_INTERNAL_BARCODEROW_CTOR_OFFSET))(this, a1);
		}

		::System::Void set(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + ZXING_PDF417_INTERNAL_BARCODEROW_SET_OFFSET))(this, a1, a2);
		}

		::System::Void addBar(::System::Boolean a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_PDF417_INTERNAL_BARCODEROW_ADDBAR_OFFSET))(this, a1, a2);
		}

		::Il2CppArray<::System::SByte>* getScaledRow(::System::Int32 a1)
		{
			return ((::Il2CppArray<::System::SByte>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_PDF417_INTERNAL_BARCODEROW_GETSCALEDROW_OFFSET))(this, a1);
		}

	};
}
