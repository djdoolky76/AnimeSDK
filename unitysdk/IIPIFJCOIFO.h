#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HGPBONMLNAJ;
class IIPIFJCOIFO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IIPIFJCOIFO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E68F9B0)
#define IIPIFJCOIFO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E68FC60)
#define IIPIFJCOIFO_CLONE_OFFSET UNITYSDK_OFFSET(0x1E68F2E0)
#define IIPIFJCOIFO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E68F240)
#define IIPIFJCOIFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1E68F230)
#define IIPIFJCOIFO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E68F590)
#define IIPIFJCOIFO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E68F3F0)
#define IIPIFJCOIFO_FGECPGIACEK_OFFSET UNITYSDK_OFFSET(0x1E68F3E0)
#define IIPIFJCOIFO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E68F860)
#define IIPIFJCOIFO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E68F1C0)
#define IIPIFJCOIFO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E68FAD0)
#define IIPIFJCOIFO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E68FA10)
#define IIPIFJCOIFO_NIDEEKAKAGA_OFFSET UNITYSDK_OFFSET(0x1E68F3D0)
#define IIPIFJCOIFO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E68F220)
#define IIPIFJCOIFO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E68F8C0)
#define IIPIFJCOIFO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E68F920)

inline static constexpr unsigned int IIPIFJCOIFO_TypeDefinitionIndex = 29934;

	class IIPIFJCOIFO : public ::System::Object
	{
	public:
		::HGPBONMLNAJ* NPNAPFMAGHE; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser_1<::IIPIFJCOIFO*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::IIPIFJCOIFO*>**)UnitySDK::FromName("", "IIPIFJCOIFO")->GetStaticField(0x51BF0);
		}

		// static const ::System::Object CLNBKAHLCKL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIPIFJCOIFO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IIPIFJCOIFO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IIPIFJCOIFO*))((::PBYTE)hIl2Cpp + IIPIFJCOIFO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IIPIFJCOIFO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::IIPIFJCOIFO*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::IIPIFJCOIFO*>*(*)())((::PBYTE)hIl2Cpp + IIPIFJCOIFO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IIPIFJCOIFO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IIPIFJCOIFO* Clone()
		{
			return ((::IIPIFJCOIFO*(*)(::PVOID))((::PBYTE)hIl2Cpp + IIPIFJCOIFO_CLONE_OFFSET))(this);
		}

		::HGPBONMLNAJ* NIDEEKAKAGA()
		{
			return ((::HGPBONMLNAJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + IIPIFJCOIFO_NIDEEKAKAGA_OFFSET))(this);
		}

		::System::Void FGECPGIACEK(::HGPBONMLNAJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGPBONMLNAJ*))((::PBYTE)hIl2Cpp + IIPIFJCOIFO_FGECPGIACEK_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IIPIFJCOIFO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IIPIFJCOIFO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IIPIFJCOIFO*))((::PBYTE)hIl2Cpp + IIPIFJCOIFO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IIPIFJCOIFO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IIPIFJCOIFO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IIPIFJCOIFO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IIPIFJCOIFO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IIPIFJCOIFO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IIPIFJCOIFO*))((::PBYTE)hIl2Cpp + IIPIFJCOIFO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IIPIFJCOIFO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
