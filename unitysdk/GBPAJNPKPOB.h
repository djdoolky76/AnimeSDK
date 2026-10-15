#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FMKMEFMOJGJ;
class GBPAJNPKPOB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GBPAJNPKPOB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E4070C0)
#define GBPAJNPKPOB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E407440)
#define GBPAJNPKPOB_CLONE_OFFSET UNITYSDK_OFFSET(0x1E406B40)
#define GBPAJNPKPOB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E406AB0)
#define GBPAJNPKPOB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E406AA0)
#define GBPAJNPKPOB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E406CD0)
#define GBPAJNPKPOB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E406C60)
#define GBPAJNPKPOB_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E406C10)
#define GBPAJNPKPOB_FPJLEGMCENK_OFFSET UNITYSDK_OFFSET(0x1E406C20)
#define GBPAJNPKPOB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E406E70)
#define GBPAJNPKPOB_HGPHFKHLONN_OFFSET UNITYSDK_OFFSET(0x1E406C40)
#define GBPAJNPKPOB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E406A60)
#define GBPAJNPKPOB_KACHGJNOBCO_OFFSET UNITYSDK_OFFSET(0x1E406BF0)
#define GBPAJNPKPOB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E407360)
#define GBPAJNPKPOB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E407280)
#define GBPAJNPKPOB_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E406C00)
#define GBPAJNPKPOB_OFGOLAEELNP_OFFSET UNITYSDK_OFFSET(0x1E406BE0)
#define GBPAJNPKPOB_OLDFFGKEHDP_OFFSET UNITYSDK_OFFSET(0x1E406C50)
#define GBPAJNPKPOB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E406A90)
#define GBPAJNPKPOB_PMPGMADMADA_OFFSET UNITYSDK_OFFSET(0x1E406C30)
#define GBPAJNPKPOB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E406ED0)
#define GBPAJNPKPOB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E406F30)

inline static constexpr unsigned int GBPAJNPKPOB_TypeDefinitionIndex = 31861;

	class GBPAJNPKPOB : public ::System::Object
	{
	public:
		::FMKMEFMOJGJ* LBGNLONMEKF; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		::System::UInt32 DBDCJHECJOO; // 0x24
		::System::UInt32 GGOLOPJCHOK; // 0x28
		static ::Google::Protobuf::MessageParser_1<::GBPAJNPKPOB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::GBPAJNPKPOB*>**)UnitySDK::FromName("", "GBPAJNPKPOB")->GetStaticField(0xDA60);
		}

		// static const ::System::Object OHMMOKDEBBP; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object HACFLGOPALO; // 0x0
		// static const ::System::Object FFCNOFNJMHD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBPAJNPKPOB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GBPAJNPKPOB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GBPAJNPKPOB*))((::PBYTE)hIl2Cpp + GBPAJNPKPOB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GBPAJNPKPOB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::GBPAJNPKPOB*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::GBPAJNPKPOB*>*(*)())((::PBYTE)hIl2Cpp + GBPAJNPKPOB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBPAJNPKPOB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GBPAJNPKPOB* Clone()
		{
			return ((::GBPAJNPKPOB*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBPAJNPKPOB_CLONE_OFFSET))(this);
		}

		::System::UInt32 OFGOLAEELNP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GBPAJNPKPOB_OFGOLAEELNP_OFFSET))(this);
		}

		::System::Void KACHGJNOBCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GBPAJNPKPOB_KACHGJNOBCO_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GBPAJNPKPOB_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GBPAJNPKPOB_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::UInt32 FPJLEGMCENK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GBPAJNPKPOB_FPJLEGMCENK_OFFSET))(this);
		}

		::System::Void PMPGMADMADA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GBPAJNPKPOB_PMPGMADMADA_OFFSET))(this, a1);
		}

		::FMKMEFMOJGJ* HGPHFKHLONN()
		{
			return ((::FMKMEFMOJGJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBPAJNPKPOB_HGPHFKHLONN_OFFSET))(this);
		}

		::System::Void OLDFFGKEHDP(::FMKMEFMOJGJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FMKMEFMOJGJ*))((::PBYTE)hIl2Cpp + GBPAJNPKPOB_OLDFFGKEHDP_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GBPAJNPKPOB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GBPAJNPKPOB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GBPAJNPKPOB*))((::PBYTE)hIl2Cpp + GBPAJNPKPOB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GBPAJNPKPOB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBPAJNPKPOB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GBPAJNPKPOB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GBPAJNPKPOB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GBPAJNPKPOB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GBPAJNPKPOB*))((::PBYTE)hIl2Cpp + GBPAJNPKPOB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GBPAJNPKPOB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
