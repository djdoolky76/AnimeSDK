#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JFPGNGNBOBJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JFPGNGNBOBJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E705920)
#define JFPGNGNBOBJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E705B40)
#define JFPGNGNBOBJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1E705570)
#define JFPGNGNBOBJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E705540)
#define JFPGNGNBOBJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1E705530)
#define JFPGNGNBOBJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E7056A0)
#define JFPGNGNBOBJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E7055D0)
#define JFPGNGNBOBJ_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E7055C0)
#define JFPGNGNBOBJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E705810)
#define JFPGNGNBOBJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E7054F0)
#define JFPGNGNBOBJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E7059E0)
#define JFPGNGNBOBJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E7059B0)
#define JFPGNGNBOBJ_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E7055B0)
#define JFPGNGNBOBJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E705520)
#define JFPGNGNBOBJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E705840)
#define JFPGNGNBOBJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E7058A0)

inline static constexpr unsigned int JFPGNGNBOBJ_TypeDefinitionIndex = 30374;

	class JFPGNGNBOBJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		static ::Google::Protobuf::MessageParser_1<::JFPGNGNBOBJ*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::JFPGNGNBOBJ*>**)UnitySDK::FromName("", "JFPGNGNBOBJ")->GetStaticField(0x5DC90);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFPGNGNBOBJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JFPGNGNBOBJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JFPGNGNBOBJ*))((::PBYTE)hIl2Cpp + JFPGNGNBOBJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JFPGNGNBOBJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::JFPGNGNBOBJ*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::JFPGNGNBOBJ*>*(*)())((::PBYTE)hIl2Cpp + JFPGNGNBOBJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFPGNGNBOBJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JFPGNGNBOBJ* Clone()
		{
			return ((::JFPGNGNBOBJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFPGNGNBOBJ_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JFPGNGNBOBJ_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JFPGNGNBOBJ_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JFPGNGNBOBJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JFPGNGNBOBJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JFPGNGNBOBJ*))((::PBYTE)hIl2Cpp + JFPGNGNBOBJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JFPGNGNBOBJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFPGNGNBOBJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JFPGNGNBOBJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JFPGNGNBOBJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JFPGNGNBOBJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JFPGNGNBOBJ*))((::PBYTE)hIl2Cpp + JFPGNGNBOBJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JFPGNGNBOBJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
