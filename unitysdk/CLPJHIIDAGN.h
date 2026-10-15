#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CLPJHIIDAGN;
class PAIJCBOKIFO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CLPJHIIDAGN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E0FEE20)
#define CLPJHIIDAGN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0FF190)
#define CLPJHIIDAGN_CLONE_OFFSET UNITYSDK_OFFSET(0x1E0FE880)
#define CLPJHIIDAGN_COIOMDBIGMO_OFFSET UNITYSDK_OFFSET(0x1E0FE940)
#define CLPJHIIDAGN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E0FE7E0)
#define CLPJHIIDAGN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0FE7D0)
#define CLPJHIIDAGN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E0FEAF0)
#define CLPJHIIDAGN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E0FE970)
#define CLPJHIIDAGN_FCAIJANDDDP_OFFSET UNITYSDK_OFFSET(0x1E0FE960)
#define CLPJHIIDAGN_FOHAMLHKGIG_OFFSET UNITYSDK_OFFSET(0x1E0FE930)
#define CLPJHIIDAGN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E0FEC70)
#define CLPJHIIDAGN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E0FE790)
#define CLPJHIIDAGN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E0FEFE0)
#define CLPJHIIDAGN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E0FEEF0)
#define CLPJHIIDAGN_OCACDPCLIBF_OFFSET UNITYSDK_OFFSET(0x1E0FE950)
#define CLPJHIIDAGN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E0FE7C0)
#define CLPJHIIDAGN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E0FECE0)
#define CLPJHIIDAGN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E0FED40)

inline static constexpr unsigned int CLPJHIIDAGN_TypeDefinitionIndex = 32744;

	class CLPJHIIDAGN : public ::System::Object
	{
	public:
		::PAIJCBOKIFO* GBOHOHMGAAN; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 AFFBGDFNCBG; // 0x20
		static ::Google::Protobuf::MessageParser_1<::CLPJHIIDAGN*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CLPJHIIDAGN*>**)UnitySDK::FromName("", "CLPJHIIDAGN")->GetStaticField(0x1D9E0);
		}

		// static const ::System::Object PPFJPHFMBMG; // 0x0
		// static const ::System::Object OICKCNEBADE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLPJHIIDAGN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CLPJHIIDAGN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CLPJHIIDAGN*))((::PBYTE)hIl2Cpp + CLPJHIIDAGN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLPJHIIDAGN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CLPJHIIDAGN*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CLPJHIIDAGN*>*(*)())((::PBYTE)hIl2Cpp + CLPJHIIDAGN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLPJHIIDAGN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CLPJHIIDAGN* Clone()
		{
			return ((::CLPJHIIDAGN*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLPJHIIDAGN_CLONE_OFFSET))(this);
		}

		::PAIJCBOKIFO* FOHAMLHKGIG()
		{
			return ((::PAIJCBOKIFO*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLPJHIIDAGN_FOHAMLHKGIG_OFFSET))(this);
		}

		::System::Void COIOMDBIGMO(::PAIJCBOKIFO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PAIJCBOKIFO*))((::PBYTE)hIl2Cpp + CLPJHIIDAGN_COIOMDBIGMO_OFFSET))(this, a1);
		}

		::System::UInt32 OCACDPCLIBF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLPJHIIDAGN_OCACDPCLIBF_OFFSET))(this);
		}

		::System::Void FCAIJANDDDP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLPJHIIDAGN_FCAIJANDDDP_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLPJHIIDAGN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CLPJHIIDAGN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CLPJHIIDAGN*))((::PBYTE)hIl2Cpp + CLPJHIIDAGN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLPJHIIDAGN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLPJHIIDAGN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLPJHIIDAGN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLPJHIIDAGN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CLPJHIIDAGN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CLPJHIIDAGN*))((::PBYTE)hIl2Cpp + CLPJHIIDAGN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLPJHIIDAGN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
