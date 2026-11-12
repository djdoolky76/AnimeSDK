#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BEKKPBIKINI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BEKKPBIKINI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FD24610)
#define BEKKPBIKINI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FD24830)
#define BEKKPBIKINI_CLONE_OFFSET UNITYSDK_OFFSET(0x1FD24260)
#define BEKKPBIKINI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FD24230)
#define BEKKPBIKINI_CTOR_OFFSET UNITYSDK_OFFSET(0x1FD24220)
#define BEKKPBIKINI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FD24390)
#define BEKKPBIKINI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FD242C0)
#define BEKKPBIKINI_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1FD242B0)
#define BEKKPBIKINI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FD24500)
#define BEKKPBIKINI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FD241E0)
#define BEKKPBIKINI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FD246D0)
#define BEKKPBIKINI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FD246A0)
#define BEKKPBIKINI_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1FD242A0)
#define BEKKPBIKINI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FD24210)
#define BEKKPBIKINI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FD24530)
#define BEKKPBIKINI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FD24590)

inline static constexpr unsigned int BEKKPBIKINI_TypeDefinitionIndex = 27679;

	class BEKKPBIKINI : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		static ::Google::Protobuf::MessageParser_1<::BEKKPBIKINI*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::BEKKPBIKINI*>**)UnitySDK::FromName("", "BEKKPBIKINI")->GetStaticField(0x40770);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEKKPBIKINI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BEKKPBIKINI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BEKKPBIKINI*))((::PBYTE)hIl2Cpp + BEKKPBIKINI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BEKKPBIKINI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::BEKKPBIKINI*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::BEKKPBIKINI*>*(*)())((::PBYTE)hIl2Cpp + BEKKPBIKINI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEKKPBIKINI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BEKKPBIKINI* Clone()
		{
			return ((::BEKKPBIKINI*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEKKPBIKINI_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BEKKPBIKINI_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BEKKPBIKINI_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BEKKPBIKINI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BEKKPBIKINI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BEKKPBIKINI*))((::PBYTE)hIl2Cpp + BEKKPBIKINI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BEKKPBIKINI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEKKPBIKINI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BEKKPBIKINI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BEKKPBIKINI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BEKKPBIKINI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BEKKPBIKINI*))((::PBYTE)hIl2Cpp + BEKKPBIKINI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BEKKPBIKINI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
