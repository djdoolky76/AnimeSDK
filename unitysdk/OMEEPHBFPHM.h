#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CDCCPHILOCC;
class OMEEPHBFPHM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OMEEPHBFPHM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F15B1E0)
#define OMEEPHBFPHM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F15B470)
#define OMEEPHBFPHM_CLONE_OFFSET UNITYSDK_OFFSET(0x1F15AC30)
#define OMEEPHBFPHM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F15ABB0)
#define OMEEPHBFPHM_CTOR_OFFSET UNITYSDK_OFFSET(0x1F15ABA0)
#define OMEEPHBFPHM_DGLMLDMIJDL_OFFSET UNITYSDK_OFFSET(0x1F15ACF0)
#define OMEEPHBFPHM_EADPEGECCBB_OFFSET UNITYSDK_OFFSET(0x1F15ACD0)
#define OMEEPHBFPHM_EKIGKEODABO_OFFSET UNITYSDK_OFFSET(0x1F15ACC0)
#define OMEEPHBFPHM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F15AE90)
#define OMEEPHBFPHM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F15AD00)
#define OMEEPHBFPHM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F15B010)
#define OMEEPHBFPHM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F15AB60)
#define OMEEPHBFPHM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F15B2E0)
#define OMEEPHBFPHM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F15B240)
#define OMEEPHBFPHM_NCKFBKNNGBM_OFFSET UNITYSDK_OFFSET(0x1F15ACE0)
#define OMEEPHBFPHM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F15AB90)
#define OMEEPHBFPHM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F15B070)
#define OMEEPHBFPHM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F15B0D0)

inline static constexpr unsigned int OMEEPHBFPHM_TypeDefinitionIndex = 33219;

	class OMEEPHBFPHM : public ::System::Object
	{
	public:
		::CDCCPHILOCC* ONBNJJEKAPL; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::Boolean CLIAJJBLJBK; // 0x20
		static ::Google::Protobuf::MessageParser_1<::OMEEPHBFPHM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::OMEEPHBFPHM*>**)UnitySDK::FromName("", "OMEEPHBFPHM")->GetStaticField(0x20480);
		}

		// static const ::System::Object HMOKDPHFBFM; // 0x0
		// static const ::System::Object EKNOELBGANH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMEEPHBFPHM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OMEEPHBFPHM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OMEEPHBFPHM*))((::PBYTE)hIl2Cpp + OMEEPHBFPHM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OMEEPHBFPHM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::OMEEPHBFPHM*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::OMEEPHBFPHM*>*(*)())((::PBYTE)hIl2Cpp + OMEEPHBFPHM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMEEPHBFPHM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OMEEPHBFPHM* Clone()
		{
			return ((::OMEEPHBFPHM*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMEEPHBFPHM_CLONE_OFFSET))(this);
		}

		::CDCCPHILOCC* EKIGKEODABO()
		{
			return ((::CDCCPHILOCC*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMEEPHBFPHM_EKIGKEODABO_OFFSET))(this);
		}

		::System::Void EADPEGECCBB(::CDCCPHILOCC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CDCCPHILOCC*))((::PBYTE)hIl2Cpp + OMEEPHBFPHM_EADPEGECCBB_OFFSET))(this, a1);
		}

		::System::Boolean NCKFBKNNGBM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OMEEPHBFPHM_NCKFBKNNGBM_OFFSET))(this);
		}

		::System::Void DGLMLDMIJDL(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OMEEPHBFPHM_DGLMLDMIJDL_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OMEEPHBFPHM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OMEEPHBFPHM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OMEEPHBFPHM*))((::PBYTE)hIl2Cpp + OMEEPHBFPHM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OMEEPHBFPHM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMEEPHBFPHM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OMEEPHBFPHM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OMEEPHBFPHM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OMEEPHBFPHM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OMEEPHBFPHM*))((::PBYTE)hIl2Cpp + OMEEPHBFPHM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OMEEPHBFPHM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
