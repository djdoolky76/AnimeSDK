#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DCMCLHJINBD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DCMCLHJINBD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E147410)
#define DCMCLHJINBD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E147820)
#define DCMCLHJINBD_CLONE_OFFSET UNITYSDK_OFFSET(0x1E146E20)
#define DCMCLHJINBD_CPBGGJBFIGL_OFFSET UNITYSDK_OFFSET(0x1E146EE0)
#define DCMCLHJINBD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E146DD0)
#define DCMCLHJINBD_CTOR_OFFSET UNITYSDK_OFFSET(0x1E146DC0)
#define DCMCLHJINBD_DDDAHNCJAKK_OFFSET UNITYSDK_OFFSET(0x1E146E90)
#define DCMCLHJINBD_DLADNIMDEKF_OFFSET UNITYSDK_OFFSET(0x1E146F00)
#define DCMCLHJINBD_DODONBLKFJO_OFFSET UNITYSDK_OFFSET(0x1E146E80)
#define DCMCLHJINBD_ENJCCCPIJPP_OFFSET UNITYSDK_OFFSET(0x1E146F20)
#define DCMCLHJINBD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E146FE0)
#define DCMCLHJINBD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E146F60)
#define DCMCLHJINBD_FNPEEEMJOLE_OFFSET UNITYSDK_OFFSET(0x1E146EF0)
#define DCMCLHJINBD_GEFCLGMKJKE_OFFSET UNITYSDK_OFFSET(0x1E146EC0)
#define DCMCLHJINBD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E147050)
#define DCMCLHJINBD_HHGALICCDHN_OFFSET UNITYSDK_OFFSET(0x1E146ED0)
#define DCMCLHJINBD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E146D80)
#define DCMCLHJINBD_KONDPCGENOK_OFFSET UNITYSDK_OFFSET(0x1E146F10)
#define DCMCLHJINBD_LDKMIKEMHFO_OFFSET UNITYSDK_OFFSET(0x1E146F40)
#define DCMCLHJINBD_MBDMNCDJPDB_OFFSET UNITYSDK_OFFSET(0x1E146EA0)
#define DCMCLHJINBD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E147720)
#define DCMCLHJINBD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E1476B0)
#define DCMCLHJINBD_MKBLEILBPHI_OFFSET UNITYSDK_OFFSET(0x1E146F50)
#define DCMCLHJINBD_NJLDPFHKGBP_OFFSET UNITYSDK_OFFSET(0x1E146F30)
#define DCMCLHJINBD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E146DB0)
#define DCMCLHJINBD_PCJOGIAJHMF_OFFSET UNITYSDK_OFFSET(0x1E146EB0)
#define DCMCLHJINBD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E1470A0)
#define DCMCLHJINBD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E147100)

inline static constexpr unsigned int DCMCLHJINBD_TypeDefinitionIndex = 35000;

	class DCMCLHJINBD : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 MPFELJLKAFH; // 0x18
		::System::UInt32 JACJGOCFFEH; // 0x1C
		::System::UInt32 DKACHEDNMCD; // 0x20
		::System::UInt32 KGEIPBPJADI; // 0x24
		::System::UInt32 EPNAIPNKBHM; // 0x28
		::System::Boolean FKPPNDICEKD; // 0x2C
		::System::Boolean CDFDONPAJCP; // 0x2D
		static ::Google::Protobuf::MessageParser_1<::DCMCLHJINBD*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::DCMCLHJINBD*>**)UnitySDK::FromName("", "DCMCLHJINBD")->GetStaticField(0x25090);
		}

		// static const ::System::Object NHKOMONNAPA; // 0x0
		// static const ::System::Object CODFBJPPBGL; // 0x0
		// static const ::System::Object MHNIHFKKPLI; // 0x0
		// static const ::System::Object DGAMCDEAFJA; // 0x0
		// static const ::System::Object BJOEDNMJFMH; // 0x0
		// static const ::System::Object HCGHGMGKCDP; // 0x0
		// static const ::System::Object HBGMNBBBJDO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCMCLHJINBD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DCMCLHJINBD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DCMCLHJINBD*))((::PBYTE)hIl2Cpp + DCMCLHJINBD_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DCMCLHJINBD_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::DCMCLHJINBD*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::DCMCLHJINBD*>*(*)())((::PBYTE)hIl2Cpp + DCMCLHJINBD_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DCMCLHJINBD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DCMCLHJINBD* Clone()
		{
			return ((::DCMCLHJINBD*(*)(::PVOID))((::PBYTE)hIl2Cpp + DCMCLHJINBD_CLONE_OFFSET))(this);
		}

		::System::UInt32 DODONBLKFJO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DCMCLHJINBD_DODONBLKFJO_OFFSET))(this);
		}

		::System::Void DDDAHNCJAKK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DCMCLHJINBD_DDDAHNCJAKK_OFFSET))(this, a1);
		}

		::System::UInt32 MBDMNCDJPDB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DCMCLHJINBD_MBDMNCDJPDB_OFFSET))(this);
		}

		::System::Void PCJOGIAJHMF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DCMCLHJINBD_PCJOGIAJHMF_OFFSET))(this, a1);
		}

		::System::Boolean GEFCLGMKJKE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DCMCLHJINBD_GEFCLGMKJKE_OFFSET))(this);
		}

		::System::Void HHGALICCDHN(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DCMCLHJINBD_HHGALICCDHN_OFFSET))(this, a1);
		}

		::System::UInt32 CPBGGJBFIGL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DCMCLHJINBD_CPBGGJBFIGL_OFFSET))(this);
		}

		::System::Void FNPEEEMJOLE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DCMCLHJINBD_FNPEEEMJOLE_OFFSET))(this, a1);
		}

		::System::UInt32 DLADNIMDEKF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DCMCLHJINBD_DLADNIMDEKF_OFFSET))(this);
		}

		::System::Void KONDPCGENOK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DCMCLHJINBD_KONDPCGENOK_OFFSET))(this, a1);
		}

		::System::UInt32 ENJCCCPIJPP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DCMCLHJINBD_ENJCCCPIJPP_OFFSET))(this);
		}

		::System::Void NJLDPFHKGBP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DCMCLHJINBD_NJLDPFHKGBP_OFFSET))(this, a1);
		}

		::System::Boolean LDKMIKEMHFO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DCMCLHJINBD_LDKMIKEMHFO_OFFSET))(this);
		}

		::System::Void MKBLEILBPHI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DCMCLHJINBD_MKBLEILBPHI_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DCMCLHJINBD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DCMCLHJINBD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DCMCLHJINBD*))((::PBYTE)hIl2Cpp + DCMCLHJINBD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DCMCLHJINBD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DCMCLHJINBD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DCMCLHJINBD_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DCMCLHJINBD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DCMCLHJINBD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DCMCLHJINBD*))((::PBYTE)hIl2Cpp + DCMCLHJINBD_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DCMCLHJINBD_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
