#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections { class IEnumerator; }

#define UNITYENGINE_A46BC7EA8727F29B_ABFD76DA42323CBB_OFFSET UNITYSDK_OFFSET(0x4189E50)
#define UNITYENGINE_A46BC7EA8727F29B_EF3AC43A0934F411_OFFSET UNITYSDK_OFFSET(0x4189D20)

namespace UnityEngine
{
	inline static constexpr unsigned int A46BC7EA8727F29B_TypeDefinitionIndex = 17695;

	class A46BC7EA8727F29B : public ::System::Object
	{
	public:
		static ::System::Void ABFD76DA42323CBB(::System::Collections::IEnumerator* AE3F1A16EC225A69, ::System::IntPtr B0B4E8DE8B31D278)
		{
			return ((::System::Void(*)(::System::Collections::IEnumerator*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_A46BC7EA8727F29B_ABFD76DA42323CBB_OFFSET))(AE3F1A16EC225A69, B0B4E8DE8B31D278);
		}

		static ::System::Object* EF3AC43A0934F411(::System::Object* FFEED6BE70907BDC, ::System::String* F79B4D487F303AB2, ::System::Object* B21F7AEBE0D24BC0)
		{
			return ((::System::Object*(*)(::System::Object*, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_A46BC7EA8727F29B_EF3AC43A0934F411_OFFSET))(FFEED6BE70907BDC, F79B4D487F303AB2, B21F7AEBE0D24BC0);
		}
	};
}
