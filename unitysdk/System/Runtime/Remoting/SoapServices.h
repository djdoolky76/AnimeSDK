#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections { class Hashtable; }
namespace System::Reflection { class Assembly; }
namespace System::Reflection { class MethodBase; }

#define SYSTEM_RUNTIME_REMOTING_SOAPSERVICES_CCTOR_OFFSET UNITYSDK_OFFSET(0x1A730840)
#define SYSTEM_RUNTIME_REMOTING_SOAPSERVICES_CODEXMLNAMESPACEFORCLRTYPENAMESPACE_OFFSET UNITYSDK_OFFSET(0x1A71F6B0)
#define SYSTEM_RUNTIME_REMOTING_SOAPSERVICES_ENCODENS_OFFSET UNITYSDK_OFFSET(0x1A72F380)
#define SYSTEM_RUNTIME_REMOTING_SOAPSERVICES_GETASSEMBLYNAME_OFFSET UNITYSDK_OFFSET(0x1A72F430)
#define SYSTEM_RUNTIME_REMOTING_SOAPSERVICES_GETNAMEKEY_OFFSET UNITYSDK_OFFSET(0x1A72F410)
#define SYSTEM_RUNTIME_REMOTING_SOAPSERVICES_GETXMLELEMENTFORINTEROPTYPE_OFFSET UNITYSDK_OFFSET(0x1A72F810)
#define SYSTEM_RUNTIME_REMOTING_SOAPSERVICES_GETXMLNAMESPACEFORMETHODCALL_OFFSET UNITYSDK_OFFSET(0x1A71EFA0)
#define SYSTEM_RUNTIME_REMOTING_SOAPSERVICES_GETXMLNAMESPACEFORMETHODRESPONSE_OFFSET UNITYSDK_OFFSET(0x1A71EE50)
#define SYSTEM_RUNTIME_REMOTING_SOAPSERVICES_GETXMLTYPEFORINTEROPTYPE_OFFSET UNITYSDK_OFFSET(0x1A72F8C0)
#define SYSTEM_RUNTIME_REMOTING_SOAPSERVICES_GET_XMLNSFORCLRTYPEWITHASSEMBLY_OFFSET UNITYSDK_OFFSET(0x1A72F2C0)
#define SYSTEM_RUNTIME_REMOTING_SOAPSERVICES_GET_XMLNSFORCLRTYPEWITHNSANDASSEMBLY_OFFSET UNITYSDK_OFFSET(0x1A72F340)
#define SYSTEM_RUNTIME_REMOTING_SOAPSERVICES_GET_XMLNSFORCLRTYPEWITHNS_OFFSET UNITYSDK_OFFSET(0x1A72F300)
#define SYSTEM_RUNTIME_REMOTING_SOAPSERVICES_PRELOAD_1_OFFSET UNITYSDK_OFFSET(0x1A72FA90)
#define SYSTEM_RUNTIME_REMOTING_SOAPSERVICES_PRELOAD_OFFSET UNITYSDK_OFFSET(0x1A72F970)
#define SYSTEM_RUNTIME_REMOTING_SOAPSERVICES_REGISTERINTEROPXMLELEMENT_OFFSET UNITYSDK_OFFSET(0x1A7305B0)
#define SYSTEM_RUNTIME_REMOTING_SOAPSERVICES_REGISTERINTEROPXMLTYPE_OFFSET UNITYSDK_OFFSET(0x1A730330)

namespace System::Runtime::Remoting
{
	inline static constexpr unsigned int SoapServices_TypeDefinitionIndex = 1225;

	class SoapServices : public ::System::Object
	{
	public:
		static ::System::Collections::Hashtable** StaticGet__soapActions()
		{
			return (::System::Collections::Hashtable**)UnitySDK::FromName("System.Runtime.Remoting", "SoapServices")->GetStaticField(0x18830);
		}

		static ::System::Collections::Hashtable** StaticGet__typeInfos()
		{
			return (::System::Collections::Hashtable**)UnitySDK::FromName("System.Runtime.Remoting", "SoapServices")->GetStaticField(0x18838);
		}

		static ::System::Collections::Hashtable** StaticGet__xmlTypes()
		{
			return (::System::Collections::Hashtable**)UnitySDK::FromName("System.Runtime.Remoting", "SoapServices")->GetStaticField(0x18840);
		}

		static ::System::Collections::Hashtable** StaticGet__soapActionsMethods()
		{
			return (::System::Collections::Hashtable**)UnitySDK::FromName("System.Runtime.Remoting", "SoapServices")->GetStaticField(0x18848);
		}

		static ::System::Collections::Hashtable** StaticGet__xmlElements()
		{
			return (::System::Collections::Hashtable**)UnitySDK::FromName("System.Runtime.Remoting", "SoapServices")->GetStaticField(0x18850);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_SOAPSERVICES_CCTOR_OFFSET))();
		}

		static ::System::String* get_XmlNsForClrTypeWithAssembly()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_SOAPSERVICES_GET_XMLNSFORCLRTYPEWITHASSEMBLY_OFFSET))();
		}

		static ::System::String* get_XmlNsForClrTypeWithNs()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_SOAPSERVICES_GET_XMLNSFORCLRTYPEWITHNS_OFFSET))();
		}

		static ::System::String* get_XmlNsForClrTypeWithNsAndAssembly()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_SOAPSERVICES_GET_XMLNSFORCLRTYPEWITHNSANDASSEMBLY_OFFSET))();
		}

		static ::System::String* CodeXmlNamespaceForClrTypeNamespace(::System::String* a1, ::System::String* a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_SOAPSERVICES_CODEXMLNAMESPACEFORCLRTYPENAMESPACE_OFFSET))(a1, a2);
		}

		static ::System::String* GetNameKey(::System::String* a1, ::System::String* a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_SOAPSERVICES_GETNAMEKEY_OFFSET))(a1, a2);
		}

		static ::System::String* GetAssemblyName(::System::Reflection::MethodBase* a1)
		{
			return ((::System::String*(*)(::System::Reflection::MethodBase*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_SOAPSERVICES_GETASSEMBLYNAME_OFFSET))(a1);
		}

		static ::System::Boolean GetXmlElementForInteropType(::System::Type* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Boolean(*)(::System::Type*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_SOAPSERVICES_GETXMLELEMENTFORINTEROPTYPE_OFFSET))(a1, a2, a3);
		}

		static ::System::String* GetXmlNamespaceForMethodCall(::System::Reflection::MethodBase* a1)
		{
			return ((::System::String*(*)(::System::Reflection::MethodBase*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_SOAPSERVICES_GETXMLNAMESPACEFORMETHODCALL_OFFSET))(a1);
		}

		static ::System::String* GetXmlNamespaceForMethodResponse(::System::Reflection::MethodBase* a1)
		{
			return ((::System::String*(*)(::System::Reflection::MethodBase*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_SOAPSERVICES_GETXMLNAMESPACEFORMETHODRESPONSE_OFFSET))(a1);
		}

		static ::System::Boolean GetXmlTypeForInteropType(::System::Type* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Boolean(*)(::System::Type*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_SOAPSERVICES_GETXMLTYPEFORINTEROPTYPE_OFFSET))(a1, a2, a3);
		}

		static ::System::Void PreLoad(::System::Reflection::Assembly* a1)
		{
			return ((::System::Void(*)(::System::Reflection::Assembly*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_SOAPSERVICES_PRELOAD_OFFSET))(a1);
		}

		static ::System::Void PreLoad_1(::System::Type* a1)
		{
			return ((::System::Void(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_SOAPSERVICES_PRELOAD_1_OFFSET))(a1);
		}

		static ::System::Void RegisterInteropXmlElement(::System::String* a1, ::System::String* a2, ::System::Type* a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_SOAPSERVICES_REGISTERINTEROPXMLELEMENT_OFFSET))(a1, a2, a3);
		}

		static ::System::Void RegisterInteropXmlType(::System::String* a1, ::System::String* a2, ::System::Type* a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_SOAPSERVICES_REGISTERINTEROPXMLTYPE_OFFSET))(a1, a2, a3);
		}

		static ::System::String* EncodeNs(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_SOAPSERVICES_ENCODENS_OFFSET))(a1);
		}

	};
}
