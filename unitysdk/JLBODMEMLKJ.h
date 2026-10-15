#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JLBODMEMLKJ_FIPIOMHIMIL.h"
#include "unitysdk/System/Object.h"
class HPPOINFLEPJ;
class JLBODMEMLKJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JLBODMEMLKJ_ACOJNBBKMOE_OFFSET UNITYSDK_OFFSET(0x1E747AE0)
#define JLBODMEMLKJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E748260)
#define JLBODMEMLKJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E748950)
#define JLBODMEMLKJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1E747AB0)
#define JLBODMEMLKJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E747850)
#define JLBODMEMLKJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1E747840)
#define JLBODMEMLKJ_EODGHOPFDCJ_OFFSET UNITYSDK_OFFSET(0x1E747AF0)
#define JLBODMEMLKJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E747B50)
#define JLBODMEMLKJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E747B20)
#define JLBODMEMLKJ_FJOAHDCIEBC_OFFSET UNITYSDK_OFFSET(0x1E747A00)
#define JLBODMEMLKJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E747E40)
#define JLBODMEMLKJ_GNCMNBHMIPE_OFFSET UNITYSDK_OFFSET(0x1E747B10)
#define JLBODMEMLKJ_GNEMOGLEHNF_OFFSET UNITYSDK_OFFSET(0x1E7479A0)
#define JLBODMEMLKJ_HABCMACJEIN_OFFSET UNITYSDK_OFFSET(0x1E747A60)
#define JLBODMEMLKJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E747800)
#define JLBODMEMLKJ_KFLDFIGDABN_OFFSET UNITYSDK_OFFSET(0x1E747B00)
#define JLBODMEMLKJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E748660)
#define JLBODMEMLKJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E748400)
#define JLBODMEMLKJ_MLMGEFIOION_OFFSET UNITYSDK_OFFSET(0x1E747A20)
#define JLBODMEMLKJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E747830)
#define JLBODMEMLKJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E748060)
#define JLBODMEMLKJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E7480C0)

inline static constexpr unsigned int JLBODMEMLKJ_TypeDefinitionIndex = 32567;

	class JLBODMEMLKJ : public ::System::Object
	{
	public:
		::System::Object* JEFEMOPFJOP; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NPFBAFODCBI; // 0x20
		::JLBODMEMLKJ_FIPIOMHIMIL NPIBMNININN; // 0x24
		static ::Google::Protobuf::MessageParser_1<::JLBODMEMLKJ*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::JLBODMEMLKJ*>**)UnitySDK::FromName("", "JLBODMEMLKJ")->GetStaticField(0x63D80);
		}

		// static const ::System::Object JJDOFLLPDJE; // 0x0
		// static const ::System::Object IKHKFKFIGBC; // 0x0
		// static const ::System::Object OLMIFJKILJG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLBODMEMLKJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JLBODMEMLKJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JLBODMEMLKJ*))((::PBYTE)hIl2Cpp + JLBODMEMLKJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JLBODMEMLKJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::JLBODMEMLKJ*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::JLBODMEMLKJ*>*(*)())((::PBYTE)hIl2Cpp + JLBODMEMLKJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JLBODMEMLKJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JLBODMEMLKJ* Clone()
		{
			return ((::JLBODMEMLKJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + JLBODMEMLKJ_CLONE_OFFSET))(this);
		}

		::System::UInt32 ACOJNBBKMOE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JLBODMEMLKJ_ACOJNBBKMOE_OFFSET))(this);
		}

		::System::Void EODGHOPFDCJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JLBODMEMLKJ_EODGHOPFDCJ_OFFSET))(this, a1);
		}

		::HPPOINFLEPJ* GNEMOGLEHNF()
		{
			return ((::HPPOINFLEPJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + JLBODMEMLKJ_GNEMOGLEHNF_OFFSET))(this);
		}

		::System::Void FJOAHDCIEBC(::HPPOINFLEPJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HPPOINFLEPJ*))((::PBYTE)hIl2Cpp + JLBODMEMLKJ_FJOAHDCIEBC_OFFSET))(this, a1);
		}

		::System::String* MLMGEFIOION()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JLBODMEMLKJ_MLMGEFIOION_OFFSET))(this);
		}

		::System::Void HABCMACJEIN(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + JLBODMEMLKJ_HABCMACJEIN_OFFSET))(this, a1);
		}

		::JLBODMEMLKJ_FIPIOMHIMIL KFLDFIGDABN()
		{
			return ((::JLBODMEMLKJ_FIPIOMHIMIL(*)(::PVOID))((::PBYTE)hIl2Cpp + JLBODMEMLKJ_KFLDFIGDABN_OFFSET))(this);
		}

		::System::Void GNCMNBHMIPE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLBODMEMLKJ_GNCMNBHMIPE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JLBODMEMLKJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JLBODMEMLKJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JLBODMEMLKJ*))((::PBYTE)hIl2Cpp + JLBODMEMLKJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JLBODMEMLKJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JLBODMEMLKJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JLBODMEMLKJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JLBODMEMLKJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JLBODMEMLKJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JLBODMEMLKJ*))((::PBYTE)hIl2Cpp + JLBODMEMLKJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JLBODMEMLKJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
