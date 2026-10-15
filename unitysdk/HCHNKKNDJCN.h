#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HCHNKKNDJCN;
class LBBGLAHFJKN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HCHNKKNDJCN_AOFFLJKCECC_OFFSET UNITYSDK_OFFSET(0x1E53F1E0)
#define HCHNKKNDJCN_BLCOGPFMKAF_OFFSET UNITYSDK_OFFSET(0x1E53F1D0)
#define HCHNKKNDJCN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E53F6F0)
#define HCHNKKNDJCN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E53FB10)
#define HCHNKKNDJCN_CLONE_OFFSET UNITYSDK_OFFSET(0x1E53F150)
#define HCHNKKNDJCN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E53F090)
#define HCHNKKNDJCN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E53F040)
#define HCHNKKNDJCN_DLLIGONLBOO_OFFSET UNITYSDK_OFFSET(0x1E53F1C0)
#define HCHNKKNDJCN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E53F380)
#define HCHNKKNDJCN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E53F1F0)
#define HCHNKKNDJCN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E53F4B0)
#define HCHNKKNDJCN_GMFECGDGGLK_OFFSET UNITYSDK_OFFSET(0x1E53F1B0)
#define HCHNKKNDJCN_JHDGEHBAKOO_OFFSET UNITYSDK_OFFSET(0x1E53F1A0)
#define HCHNKKNDJCN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E53EFD0)
#define HCHNKKNDJCN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E53F920)
#define HCHNKKNDJCN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E53F870)
#define HCHNKKNDJCN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E53F030)
#define HCHNKKNDJCN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E53F520)
#define HCHNKKNDJCN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E53F580)

	class HCHNKKNDJCN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::LBBGLAHFJKN*>* JAHFPKANDHM; // 0x18
		::System::UInt32 HEHINGPKKFH; // 0x20
		::System::UInt32 NHKDGAEFAND; // 0x24
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "HCHNKKNDJCN")->GetStaticField(0x302E0);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_CPODNPDINOG()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "HCHNKKNDJCN")->GetStaticField(0x302E8);
		}

		// static const ::System::Object JHDHDIJPNJA; // 0x0
		// static const ::System::Object HOKOGCDELEF; // 0x0
		// static const ::System::Object IPHANIPBLGP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCHNKKNDJCN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HCHNKKNDJCN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HCHNKKNDJCN*))((::PBYTE)hIl2Cpp + HCHNKKNDJCN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HCHNKKNDJCN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + HCHNKKNDJCN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCHNKKNDJCN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HCHNKKNDJCN* Clone()
		{
			return ((::HCHNKKNDJCN*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCHNKKNDJCN_CLONE_OFFSET))(this);
		}

		::System::UInt32 JHDGEHBAKOO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HCHNKKNDJCN_JHDGEHBAKOO_OFFSET))(this);
		}

		::System::Void GMFECGDGGLK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HCHNKKNDJCN_GMFECGDGGLK_OFFSET))(this, a1);
		}

		::System::UInt32 DLLIGONLBOO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HCHNKKNDJCN_DLLIGONLBOO_OFFSET))(this);
		}

		::System::Void BLCOGPFMKAF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HCHNKKNDJCN_BLCOGPFMKAF_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::LBBGLAHFJKN*>* AOFFLJKCECC()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::LBBGLAHFJKN*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCHNKKNDJCN_AOFFLJKCECC_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HCHNKKNDJCN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HCHNKKNDJCN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HCHNKKNDJCN*))((::PBYTE)hIl2Cpp + HCHNKKNDJCN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HCHNKKNDJCN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCHNKKNDJCN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HCHNKKNDJCN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HCHNKKNDJCN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HCHNKKNDJCN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HCHNKKNDJCN*))((::PBYTE)hIl2Cpp + HCHNKKNDJCN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HCHNKKNDJCN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
