#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Diagnostics { class StackTrace; }

#define UNITYENGINE_E3DA4973CF6D0645_B7206A79D0C0BF07_OFFSET UNITYSDK_OFFSET(0x41588C0)
#define UNITYENGINE_E3DA4973CF6D0645_E48ADA61EBD752A7_OFFSET UNITYSDK_OFFSET(0x4158390)
#define UNITYENGINE_E3DA4973CF6D0645_ED74D0E114294FD6_OFFSET UNITYSDK_OFFSET(0x4157BF0)
#define UNITYENGINE_E3DA4973CF6D0645_FD3B9E0F12E135BB_OFFSET UNITYSDK_OFFSET(0x41584D0)
#define UNITYENGINE_E3DA4973CF6D0645__CCTOR_OFFSET UNITYSDK_OFFSET(0x41589D0)

namespace UnityEngine
{
	inline static constexpr unsigned int E3DA4973CF6D0645_TypeDefinitionIndex = 17315;

	class E3DA4973CF6D0645 : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_F202C9C71928DCBF()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(E3DA4973CF6D0645_TypeDefinitionIndex)->GetStaticField(0x0);
		}

		static ::System::String* E48ADA61EBD752A7()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_E3DA4973CF6D0645_E48ADA61EBD752A7_OFFSET))();
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_E3DA4973CF6D0645__CCTOR_OFFSET))();
		}

		static ::System::Void B7206A79D0C0BF07(::System::String* F89C69B7E6160352)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_E3DA4973CF6D0645_B7206A79D0C0BF07_OFFSET))(F89C69B7E6160352);
		}

		static ::System::Void FD3B9E0F12E135BB(::System::Object* E9B3CF9A3B510215, ::System::String*& B083BE7841B347C4, ::System::String*& BCDB13E083706FEB)
		{
			return ((::System::Void(*)(::System::Object*, ::System::String*&, ::System::String*&))((::PBYTE)hIl2Cpp + UNITYENGINE_E3DA4973CF6D0645_FD3B9E0F12E135BB_OFFSET))(E9B3CF9A3B510215, B083BE7841B347C4, BCDB13E083706FEB);
		}

		static ::System::String* ED74D0E114294FD6(::System::Diagnostics::StackTrace* BCDB13E083706FEB)
		{
			return ((::System::String*(*)(::System::Diagnostics::StackTrace*))((::PBYTE)hIl2Cpp + UNITYENGINE_E3DA4973CF6D0645_ED74D0E114294FD6_OFFSET))(BCDB13E083706FEB);
		}
	};
}
