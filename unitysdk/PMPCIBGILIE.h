#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PMPCIBGILIE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PMPCIBGILIE_AENLBGLIBJL_OFFSET UNITYSDK_OFFSET(0x1DFAFDF0)
#define PMPCIBGILIE_AIMMOANBDCA_OFFSET UNITYSDK_OFFSET(0x1DFAFE00)
#define PMPCIBGILIE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DFB0390)
#define PMPCIBGILIE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFB0730)
#define PMPCIBGILIE_CLONE_OFFSET UNITYSDK_OFFSET(0x1DFAFD70)
#define PMPCIBGILIE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DFAFD30)
#define PMPCIBGILIE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DFAFD20)
#define PMPCIBGILIE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DFAFEB0)
#define PMPCIBGILIE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DFAFE50)
#define PMPCIBGILIE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DFB00B0)
#define PMPCIBGILIE_GNBIPGJGOAJ_OFFSET UNITYSDK_OFFSET(0x1DFAFE20)
#define PMPCIBGILIE_IDMNDCDLOGJ_OFFSET UNITYSDK_OFFSET(0x1DFAFE40)
#define PMPCIBGILIE_IEAOGELJPBD_OFFSET UNITYSDK_OFFSET(0x1DFAFE30)
#define PMPCIBGILIE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DFAFCB0)
#define PMPCIBGILIE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DFB0520)
#define PMPCIBGILIE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DFB04C0)
#define PMPCIBGILIE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DFAFD10)
#define PMPCIBGILIE_PJLEOJKPGAJ_OFFSET UNITYSDK_OFFSET(0x1DFAFE10)
#define PMPCIBGILIE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DFB01D0)
#define PMPCIBGILIE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DFB0230)

inline static constexpr unsigned int PMPCIBGILIE_TypeDefinitionIndex = 25649;

	class PMPCIBGILIE : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 DAOHIMDOFME; // 0x18
		::System::UInt32 LJDBCGPFFDH; // 0x1C
		::System::Double BCLKCLDFMOA; // 0x20
		static ::Google::Protobuf::MessageParser_1<::PMPCIBGILIE*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::PMPCIBGILIE*>**)UnitySDK::FromName("", "PMPCIBGILIE")->GetStaticField(0x4E1B0);
		}

		// static const ::System::Object KOEOEHIMOEI; // 0x0
		// static const ::System::Object IBJNBJNDPIK; // 0x0
		// static const ::System::Object DCLDKJHAEOJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMPCIBGILIE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PMPCIBGILIE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PMPCIBGILIE*))((::PBYTE)hIl2Cpp + PMPCIBGILIE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PMPCIBGILIE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::PMPCIBGILIE*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::PMPCIBGILIE*>*(*)())((::PBYTE)hIl2Cpp + PMPCIBGILIE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PMPCIBGILIE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PMPCIBGILIE* Clone()
		{
			return ((::PMPCIBGILIE*(*)(::PVOID))((::PBYTE)hIl2Cpp + PMPCIBGILIE_CLONE_OFFSET))(this);
		}

		::System::UInt32 AENLBGLIBJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PMPCIBGILIE_AENLBGLIBJL_OFFSET))(this);
		}

		::System::Void AIMMOANBDCA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PMPCIBGILIE_AIMMOANBDCA_OFFSET))(this, a1);
		}

		::System::Double PJLEOJKPGAJ()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + PMPCIBGILIE_PJLEOJKPGAJ_OFFSET))(this);
		}

		::System::Void GNBIPGJGOAJ(::System::Double a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + PMPCIBGILIE_GNBIPGJGOAJ_OFFSET))(this, a1);
		}

		::System::UInt32 IEAOGELJPBD()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PMPCIBGILIE_IEAOGELJPBD_OFFSET))(this);
		}

		::System::Void IDMNDCDLOGJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PMPCIBGILIE_IDMNDCDLOGJ_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PMPCIBGILIE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PMPCIBGILIE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PMPCIBGILIE*))((::PBYTE)hIl2Cpp + PMPCIBGILIE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PMPCIBGILIE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PMPCIBGILIE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PMPCIBGILIE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PMPCIBGILIE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PMPCIBGILIE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PMPCIBGILIE*))((::PBYTE)hIl2Cpp + PMPCIBGILIE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PMPCIBGILIE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
