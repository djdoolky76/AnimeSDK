#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DNDMLICBKEF;
class PAIJCBOKIFO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DNDMLICBKEF_AABOOKNIJKN_OFFSET UNITYSDK_OFFSET(0x1E1C6E20)
#define DNDMLICBKEF_BEHODKAJAFD_OFFSET UNITYSDK_OFFSET(0x1E1C6E50)
#define DNDMLICBKEF_BKHMAJJILMH_OFFSET UNITYSDK_OFFSET(0x1E1C6E30)
#define DNDMLICBKEF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E1C7260)
#define DNDMLICBKEF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1C76D0)
#define DNDMLICBKEF_CLONE_OFFSET UNITYSDK_OFFSET(0x1E1C6D80)
#define DNDMLICBKEF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E1C6CB0)
#define DNDMLICBKEF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1C6C60)
#define DNDMLICBKEF_EOCGBCPEKMF_OFFSET UNITYSDK_OFFSET(0x1E1C6DD0)
#define DNDMLICBKEF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E1C6EC0)
#define DNDMLICBKEF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E1C6E60)
#define DNDMLICBKEF_FCAIJANDDDP_OFFSET UNITYSDK_OFFSET(0x1E1C6E00)
#define DNDMLICBKEF_FEGIMNBKFHN_OFFSET UNITYSDK_OFFSET(0x1E1C6E10)
#define DNDMLICBKEF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E1C6F60)
#define DNDMLICBKEF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E1C6BF0)
#define DNDMLICBKEF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E1C75C0)
#define DNDMLICBKEF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E1C74F0)
#define DNDMLICBKEF_NLHPBHDBDCO_OFFSET UNITYSDK_OFFSET(0x1E1C6E40)
#define DNDMLICBKEF_OCACDPCLIBF_OFFSET UNITYSDK_OFFSET(0x1E1C6DF0)
#define DNDMLICBKEF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E1C6C50)
#define DNDMLICBKEF_PDALJBFOBJO_OFFSET UNITYSDK_OFFSET(0x1E1C6DE0)
#define DNDMLICBKEF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E1C6FE0)
#define DNDMLICBKEF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E1C7040)

inline static constexpr unsigned int DNDMLICBKEF_TypeDefinitionIndex = 32640;

	class DNDMLICBKEF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::PAIJCBOKIFO*>* PNDAHCMKENH; // 0x18
		::System::UInt32 MLCHFINKHHM; // 0x20
		::System::UInt32 EMPJJFJONNC; // 0x24
		::System::UInt32 INLNGPOAHJH; // 0x28
		::System::UInt32 AFFBGDFNCBG; // 0x2C
		static ::Google::Protobuf::FieldCodec_1<::PAIJCBOKIFO*>** StaticGet_OAOCJEOJNMC()
		{
			return (::Google::Protobuf::FieldCodec_1<::PAIJCBOKIFO*>**)UnitySDK::FromName("", "DNDMLICBKEF")->GetStaticField(0x36BF0);
		}

		static ::Google::Protobuf::MessageParser_1<::DNDMLICBKEF*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::DNDMLICBKEF*>**)UnitySDK::FromName("", "DNDMLICBKEF")->GetStaticField(0x36BF8);
		}

		// static const ::System::Object GFDDFHKIODN; // 0x0
		// static const ::System::Object OICKCNEBADE; // 0x0
		// static const ::System::Object HBIJBPKKMNN; // 0x0
		// static const ::System::Object EAOJBIGAGLE; // 0x0
		// static const ::System::Object ANLDPPJMDBM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNDMLICBKEF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DNDMLICBKEF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DNDMLICBKEF*))((::PBYTE)hIl2Cpp + DNDMLICBKEF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DNDMLICBKEF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::DNDMLICBKEF*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::DNDMLICBKEF*>*(*)())((::PBYTE)hIl2Cpp + DNDMLICBKEF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DNDMLICBKEF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DNDMLICBKEF* Clone()
		{
			return ((::DNDMLICBKEF*(*)(::PVOID))((::PBYTE)hIl2Cpp + DNDMLICBKEF_CLONE_OFFSET))(this);
		}

		::System::UInt32 EOCGBCPEKMF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DNDMLICBKEF_EOCGBCPEKMF_OFFSET))(this);
		}

		::System::Void PDALJBFOBJO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DNDMLICBKEF_PDALJBFOBJO_OFFSET))(this, a1);
		}

		::System::UInt32 OCACDPCLIBF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DNDMLICBKEF_OCACDPCLIBF_OFFSET))(this);
		}

		::System::Void FCAIJANDDDP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DNDMLICBKEF_FCAIJANDDDP_OFFSET))(this, a1);
		}

		::System::UInt32 FEGIMNBKFHN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DNDMLICBKEF_FEGIMNBKFHN_OFFSET))(this);
		}

		::System::Void AABOOKNIJKN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DNDMLICBKEF_AABOOKNIJKN_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::PAIJCBOKIFO*>* BKHMAJJILMH()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::PAIJCBOKIFO*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DNDMLICBKEF_BKHMAJJILMH_OFFSET))(this);
		}

		::System::UInt32 NLHPBHDBDCO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DNDMLICBKEF_NLHPBHDBDCO_OFFSET))(this);
		}

		::System::Void BEHODKAJAFD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DNDMLICBKEF_BEHODKAJAFD_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DNDMLICBKEF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DNDMLICBKEF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DNDMLICBKEF*))((::PBYTE)hIl2Cpp + DNDMLICBKEF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DNDMLICBKEF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DNDMLICBKEF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DNDMLICBKEF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DNDMLICBKEF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DNDMLICBKEF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DNDMLICBKEF*))((::PBYTE)hIl2Cpp + DNDMLICBKEF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DNDMLICBKEF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
