#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define ONBNKDPCNPD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DD87070)
#define ONBNKDPCNPD_CFOFDGBCHFI_OFFSET UNITYSDK_OFFSET(0x1DD86F70)
#define ONBNKDPCNPD_EFKFPFIHMBJ_1_OFFSET UNITYSDK_OFFSET(0x1DD86D00)
#define ONBNKDPCNPD_EFKFPFIHMBJ_2_OFFSET UNITYSDK_OFFSET(0x1DD86DB0)
#define ONBNKDPCNPD_EFKFPFIHMBJ_3_OFFSET UNITYSDK_OFFSET(0x1DD86E60)
#define ONBNKDPCNPD_EFKFPFIHMBJ_OFFSET UNITYSDK_OFFSET(0x1DD86C60)
#define ONBNKDPCNPD_OOFNJHFFGFC_10_OFFSET UNITYSDK_OFFSET(0x1DD864F0)
#define ONBNKDPCNPD_OOFNJHFFGFC_11_OFFSET UNITYSDK_OFFSET(0x1DD86520)
#define ONBNKDPCNPD_OOFNJHFFGFC_12_OFFSET UNITYSDK_OFFSET(0x1DD865C0)
#define ONBNKDPCNPD_OOFNJHFFGFC_13_OFFSET UNITYSDK_OFFSET(0x1DD865E0)
#define ONBNKDPCNPD_OOFNJHFFGFC_1_OFFSET UNITYSDK_OFFSET(0x1DD85C60)
#define ONBNKDPCNPD_OOFNJHFFGFC_2_OFFSET UNITYSDK_OFFSET(0x1DD85DA0)
#define ONBNKDPCNPD_OOFNJHFFGFC_3_OFFSET UNITYSDK_OFFSET(0x1DD85DF0)
#define ONBNKDPCNPD_OOFNJHFFGFC_4_OFFSET UNITYSDK_OFFSET(0x1DD85CB0)
#define ONBNKDPCNPD_OOFNJHFFGFC_5_OFFSET UNITYSDK_OFFSET(0x1DD85B60)
#define ONBNKDPCNPD_OOFNJHFFGFC_6_OFFSET UNITYSDK_OFFSET(0x1DD85E40)
#define ONBNKDPCNPD_OOFNJHFFGFC_7_OFFSET UNITYSDK_OFFSET(0x1DD85F70)
#define ONBNKDPCNPD_OOFNJHFFGFC_8_OFFSET UNITYSDK_OFFSET(0x1DD860C0)
#define ONBNKDPCNPD_OOFNJHFFGFC_9_OFFSET UNITYSDK_OFFSET(0x1DD862D0)
#define ONBNKDPCNPD_OOFNJHFFGFC_OFFSET UNITYSDK_OFFSET(0x1DD85B10)

	class ONBNKDPCNPD : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Char>** StaticGet_OHNDBOCDBNJ()
		{
			return (::Il2CppArray<::System::Char>**)UnitySDK::FromName("", "ONBNKDPCNPD")->GetStaticField(0x2F0F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ONBNKDPCNPD_CCTOR_OFFSET))();
		}

		static ::System::Text::StringBuilder* OOFNJHFFGFC(::System::Text::StringBuilder* a1, ::System::Byte a2, ::System::UInt32 a3, ::System::Char a4, ::System::UInt32 a5)
		{
			return ((::System::Text::StringBuilder*(*)(::System::Text::StringBuilder*, ::System::Byte, ::System::UInt32, ::System::Char, ::System::UInt32))((::PBYTE)hIl2Cpp + ONBNKDPCNPD_OOFNJHFFGFC_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Text::StringBuilder* OOFNJHFFGFC_1(::System::Text::StringBuilder* a1, ::System::SByte a2, ::System::UInt32 a3, ::System::Char a4, ::System::UInt32 a5)
		{
			return ((::System::Text::StringBuilder*(*)(::System::Text::StringBuilder*, ::System::SByte, ::System::UInt32, ::System::Char, ::System::UInt32))((::PBYTE)hIl2Cpp + ONBNKDPCNPD_OOFNJHFFGFC_1_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Text::StringBuilder* OOFNJHFFGFC_2(::System::Text::StringBuilder* a1, ::System::Int16 a2, ::System::UInt32 a3, ::System::Char a4, ::System::UInt32 a5)
		{
			return ((::System::Text::StringBuilder*(*)(::System::Text::StringBuilder*, ::System::Int16, ::System::UInt32, ::System::Char, ::System::UInt32))((::PBYTE)hIl2Cpp + ONBNKDPCNPD_OOFNJHFFGFC_2_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Text::StringBuilder* OOFNJHFFGFC_3(::System::Text::StringBuilder* a1, ::System::UInt16 a2, ::System::UInt32 a3, ::System::Char a4, ::System::UInt32 a5)
		{
			return ((::System::Text::StringBuilder*(*)(::System::Text::StringBuilder*, ::System::UInt16, ::System::UInt32, ::System::Char, ::System::UInt32))((::PBYTE)hIl2Cpp + ONBNKDPCNPD_OOFNJHFFGFC_3_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Text::StringBuilder* OOFNJHFFGFC_4(::System::Text::StringBuilder* a1, ::System::Int32 a2, ::System::UInt32 a3, ::System::Char a4, ::System::UInt32 a5)
		{
			return ((::System::Text::StringBuilder*(*)(::System::Text::StringBuilder*, ::System::Int32, ::System::UInt32, ::System::Char, ::System::UInt32))((::PBYTE)hIl2Cpp + ONBNKDPCNPD_OOFNJHFFGFC_4_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Text::StringBuilder* OOFNJHFFGFC_5(::System::Text::StringBuilder* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::Char a4, ::System::UInt32 a5)
		{
			return ((::System::Text::StringBuilder*(*)(::System::Text::StringBuilder*, ::System::UInt32, ::System::UInt32, ::System::Char, ::System::UInt32))((::PBYTE)hIl2Cpp + ONBNKDPCNPD_OOFNJHFFGFC_5_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Text::StringBuilder* OOFNJHFFGFC_6(::System::Text::StringBuilder* a1, ::System::Int64 a2, ::System::UInt32 a3, ::System::Char a4, ::System::UInt32 a5)
		{
			return ((::System::Text::StringBuilder*(*)(::System::Text::StringBuilder*, ::System::Int64, ::System::UInt32, ::System::Char, ::System::UInt32))((::PBYTE)hIl2Cpp + ONBNKDPCNPD_OOFNJHFFGFC_6_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Text::StringBuilder* OOFNJHFFGFC_7(::System::Text::StringBuilder* a1, ::System::UInt64 a2, ::System::UInt32 a3, ::System::Char a4, ::System::UInt32 a5)
		{
			return ((::System::Text::StringBuilder*(*)(::System::Text::StringBuilder*, ::System::UInt64, ::System::UInt32, ::System::Char, ::System::UInt32))((::PBYTE)hIl2Cpp + ONBNKDPCNPD_OOFNJHFFGFC_7_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Text::StringBuilder* OOFNJHFFGFC_8(::System::Text::StringBuilder* a1, ::System::Single a2, ::System::UInt32 a3, ::System::UInt32 a4, ::System::Char a5)
		{
			return ((::System::Text::StringBuilder*(*)(::System::Text::StringBuilder*, ::System::Single, ::System::UInt32, ::System::UInt32, ::System::Char))((::PBYTE)hIl2Cpp + ONBNKDPCNPD_OOFNJHFFGFC_8_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Text::StringBuilder* OOFNJHFFGFC_9(::System::Text::StringBuilder* a1, ::System::Double a2, ::System::UInt32 a3, ::System::UInt32 a4, ::System::Char a5)
		{
			return ((::System::Text::StringBuilder*(*)(::System::Text::StringBuilder*, ::System::Double, ::System::UInt32, ::System::UInt32, ::System::Char))((::PBYTE)hIl2Cpp + ONBNKDPCNPD_OOFNJHFFGFC_9_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Text::StringBuilder* OOFNJHFFGFC_10(::System::Text::StringBuilder* a1, ::System::Boolean a2)
		{
			return ((::System::Text::StringBuilder*(*)(::System::Text::StringBuilder*, ::System::Boolean))((::PBYTE)hIl2Cpp + ONBNKDPCNPD_OOFNJHFFGFC_10_OFFSET))(a1, a2);
		}

		static ::System::Text::StringBuilder* OOFNJHFFGFC_11(::System::Text::StringBuilder* a1, ::System::Char a2)
		{
			return ((::System::Text::StringBuilder*(*)(::System::Text::StringBuilder*, ::System::Char))((::PBYTE)hIl2Cpp + ONBNKDPCNPD_OOFNJHFFGFC_11_OFFSET))(a1, a2);
		}

		static ::System::Text::StringBuilder* OOFNJHFFGFC_12(::System::Text::StringBuilder* a1, ::System::String* a2)
		{
			return ((::System::Text::StringBuilder*(*)(::System::Text::StringBuilder*, ::System::String*))((::PBYTE)hIl2Cpp + ONBNKDPCNPD_OOFNJHFFGFC_12_OFFSET))(a1, a2);
		}

		static ::System::Text::StringBuilder* OOFNJHFFGFC_13(::System::Text::StringBuilder* a1, ::System::Object* a2)
		{
			return ((::System::Text::StringBuilder*(*)(::System::Text::StringBuilder*, ::System::Object*))((::PBYTE)hIl2Cpp + ONBNKDPCNPD_OOFNJHFFGFC_13_OFFSET))(a1, a2);
		}

		static ::System::Text::StringBuilder* EFKFPFIHMBJ(::System::Text::StringBuilder* a1, ::System::String* a2, ::System::Object* a3)
		{
			return ((::System::Text::StringBuilder*(*)(::System::Text::StringBuilder*, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + ONBNKDPCNPD_EFKFPFIHMBJ_OFFSET))(a1, a2, a3);
		}

		static ::System::Text::StringBuilder* EFKFPFIHMBJ_1(::System::Text::StringBuilder* a1, ::System::String* a2, ::System::Object* a3, ::System::Object* a4)
		{
			return ((::System::Text::StringBuilder*(*)(::System::Text::StringBuilder*, ::System::String*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + ONBNKDPCNPD_EFKFPFIHMBJ_1_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Text::StringBuilder* EFKFPFIHMBJ_2(::System::Text::StringBuilder* a1, ::System::String* a2, ::System::Object* a3, ::System::Object* a4, ::System::Object* a5)
		{
			return ((::System::Text::StringBuilder*(*)(::System::Text::StringBuilder*, ::System::String*, ::System::Object*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + ONBNKDPCNPD_EFKFPFIHMBJ_2_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Text::StringBuilder* EFKFPFIHMBJ_3(::System::Text::StringBuilder* a1, ::System::String* a2, ::Il2CppArray<::System::Object*>* a3)
		{
			return ((::System::Text::StringBuilder*(*)(::System::Text::StringBuilder*, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + ONBNKDPCNPD_EFKFPFIHMBJ_3_OFFSET))(a1, a2, a3);
		}

		static ::System::Text::StringBuilder* CFOFDGBCHFI(::System::Text::StringBuilder* a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Text::StringBuilder*(*)(::System::Text::StringBuilder*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + ONBNKDPCNPD_CFOFDGBCHFI_OFFSET))(a1, a2, a3);
		}

	};
