#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HEBIIBBMNKG;
class KHJMPFPEIIN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KHJMPFPEIIN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E845D00)
#define KHJMPFPEIIN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E845F70)
#define KHJMPFPEIIN_CLONE_OFFSET UNITYSDK_OFFSET(0x1E8456C0)
#define KHJMPFPEIIN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E845640)
#define KHJMPFPEIIN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E845630)
#define KHJMPFPEIIN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E8458E0)
#define KHJMPFPEIIN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E845770)
#define KHJMPFPEIIN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E845BB0)
#define KHJMPFPEIIN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E8455F0)
#define KHJMPFPEIIN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E845DF0)
#define KHJMPFPEIIN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E845D60)
#define KHJMPFPEIIN_OJKOJFFGNDK_OFFSET UNITYSDK_OFFSET(0x1E845750)
#define KHJMPFPEIIN_PAEAJNGCDFM_OFFSET UNITYSDK_OFFSET(0x1E845760)
#define KHJMPFPEIIN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E845620)
#define KHJMPFPEIIN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E845C10)
#define KHJMPFPEIIN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E845C70)

inline static constexpr unsigned int KHJMPFPEIIN_TypeDefinitionIndex = 26446;

	class KHJMPFPEIIN : public ::System::Object
	{
	public:
		::HEBIIBBMNKG* FKAOMBKACGA; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "KHJMPFPEIIN")->GetStaticField(0x175D0);
		}

		// static const ::System::Object DEIJGADJJIG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHJMPFPEIIN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KHJMPFPEIIN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KHJMPFPEIIN*))((::PBYTE)hIl2Cpp + KHJMPFPEIIN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KHJMPFPEIIN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + KHJMPFPEIIN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHJMPFPEIIN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KHJMPFPEIIN* Clone()
		{
			return ((::KHJMPFPEIIN*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHJMPFPEIIN_CLONE_OFFSET))(this);
		}

		::HEBIIBBMNKG* OJKOJFFGNDK()
		{
			return ((::HEBIIBBMNKG*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHJMPFPEIIN_OJKOJFFGNDK_OFFSET))(this);
		}

		::System::Void PAEAJNGCDFM(::HEBIIBBMNKG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HEBIIBBMNKG*))((::PBYTE)hIl2Cpp + KHJMPFPEIIN_PAEAJNGCDFM_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KHJMPFPEIIN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KHJMPFPEIIN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KHJMPFPEIIN*))((::PBYTE)hIl2Cpp + KHJMPFPEIIN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KHJMPFPEIIN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHJMPFPEIIN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KHJMPFPEIIN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KHJMPFPEIIN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KHJMPFPEIIN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KHJMPFPEIIN*))((::PBYTE)hIl2Cpp + KHJMPFPEIIN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KHJMPFPEIIN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
