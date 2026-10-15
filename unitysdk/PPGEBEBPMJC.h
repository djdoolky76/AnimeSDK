#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PPGEBEBPMJC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PPGEBEBPMJC_BBMLDEEGGMA_OFFSET UNITYSDK_OFFSET(0x1DFD8F00)
#define PPGEBEBPMJC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DFD92E0)
#define PPGEBEBPMJC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFD95A0)
#define PPGEBEBPMJC_CHPEEILKBLC_OFFSET UNITYSDK_OFFSET(0x1DFD8EE0)
#define PPGEBEBPMJC_CLONE_OFFSET UNITYSDK_OFFSET(0x1DFD8E50)
#define PPGEBEBPMJC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DFD8E10)
#define PPGEBEBPMJC_CTOR_OFFSET UNITYSDK_OFFSET(0x1DFD8E00)
#define PPGEBEBPMJC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DFD8FC0)
#define PPGEBEBPMJC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DFD8F30)
#define PPGEBEBPMJC_FCHEMONJFGI_OFFSET UNITYSDK_OFFSET(0x1DFD8F10)
#define PPGEBEBPMJC_FNJPEDNPCFC_OFFSET UNITYSDK_OFFSET(0x1DFD8EF0)
#define PPGEBEBPMJC_FPNADKBMCFC_OFFSET UNITYSDK_OFFSET(0x1DFD8ED0)
#define PPGEBEBPMJC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DFD90B0)
#define PPGEBEBPMJC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DFD8D90)
#define PPGEBEBPMJC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DFD93E0)
#define PPGEBEBPMJC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DFD9390)
#define PPGEBEBPMJC_NBLLLFIFBLL_OFFSET UNITYSDK_OFFSET(0x1DFD8F20)
#define PPGEBEBPMJC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DFD8DF0)
#define PPGEBEBPMJC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DFD90E0)
#define PPGEBEBPMJC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DFD9140)

inline static constexpr unsigned int PPGEBEBPMJC_TypeDefinitionIndex = 29336;

	class PPGEBEBPMJC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::Boolean AEGJPIHEPIN; // 0x18
		::System::Boolean BHNLGNBLMFN; // 0x19
		::System::Byte _padding0[0x2];
		::System::UInt32 BGGMKOBGPDA; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::PPGEBEBPMJC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::PPGEBEBPMJC*>**)UnitySDK::FromName("", "PPGEBEBPMJC")->GetStaticField(0x15490);
		}

		// static const ::System::Object IPCHEKHLLND; // 0x0
		// static const ::System::Object JBLEGDNAAOO; // 0x0
		// static const ::System::Object NLAHKDAONBF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPGEBEBPMJC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PPGEBEBPMJC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PPGEBEBPMJC*))((::PBYTE)hIl2Cpp + PPGEBEBPMJC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PPGEBEBPMJC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::PPGEBEBPMJC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::PPGEBEBPMJC*>*(*)())((::PBYTE)hIl2Cpp + PPGEBEBPMJC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PPGEBEBPMJC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PPGEBEBPMJC* Clone()
		{
			return ((::PPGEBEBPMJC*(*)(::PVOID))((::PBYTE)hIl2Cpp + PPGEBEBPMJC_CLONE_OFFSET))(this);
		}

		::System::Boolean FPNADKBMCFC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PPGEBEBPMJC_FPNADKBMCFC_OFFSET))(this);
		}

		::System::Void CHPEEILKBLC(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PPGEBEBPMJC_CHPEEILKBLC_OFFSET))(this, a1);
		}

		::System::Boolean FNJPEDNPCFC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PPGEBEBPMJC_FNJPEDNPCFC_OFFSET))(this);
		}

		::System::Void BBMLDEEGGMA(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PPGEBEBPMJC_BBMLDEEGGMA_OFFSET))(this, a1);
		}

		::System::UInt32 FCHEMONJFGI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PPGEBEBPMJC_FCHEMONJFGI_OFFSET))(this);
		}

		::System::Void NBLLLFIFBLL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PPGEBEBPMJC_NBLLLFIFBLL_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PPGEBEBPMJC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PPGEBEBPMJC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PPGEBEBPMJC*))((::PBYTE)hIl2Cpp + PPGEBEBPMJC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PPGEBEBPMJC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PPGEBEBPMJC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PPGEBEBPMJC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PPGEBEBPMJC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PPGEBEBPMJC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PPGEBEBPMJC*))((::PBYTE)hIl2Cpp + PPGEBEBPMJC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PPGEBEBPMJC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
