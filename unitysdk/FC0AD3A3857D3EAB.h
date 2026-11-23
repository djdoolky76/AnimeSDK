#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E2DE926113CB084F.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FC0AD3A3857D3EAB_A961A67F698444E3_OFFSET UNITYSDK_OFFSET(0x25FD150)
#define FC0AD3A3857D3EAB_B988BC20FD084E7F_OFFSET UNITYSDK_OFFSET(0x25FD220)
#define FC0AD3A3857D3EAB__CCTOR_OFFSET UNITYSDK_OFFSET(0x25FD300)

inline static constexpr unsigned int FC0AD3A3857D3EAB_TypeDefinitionIndex = 5869;

class FC0AD3A3857D3EAB : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::E2DE926113CB084F, ::System::String*>** StaticGet_BCD5F2FC88F7B3A3()
	{
		return (::System::Collections::Generic::Dictionary_2<::E2DE926113CB084F, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(FC0AD3A3857D3EAB_TypeDefinitionIndex)->GetStaticField(0x0);
	}

	static ::System::String* A961A67F698444E3(::E2DE926113CB084F FF807B1207717EB4)
	{
		return ((::System::String*(*)(::E2DE926113CB084F))((::PBYTE)hIl2Cpp + FC0AD3A3857D3EAB_A961A67F698444E3_OFFSET))(FF807B1207717EB4);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FC0AD3A3857D3EAB__CCTOR_OFFSET))();
	}

	static ::System::Void B988BC20FD084E7F(::E2DE926113CB084F FF807B1207717EB4, ::System::String* B4119760351B6FB8, ::System::Boolean E8E4B18F8423D406)
	{
		return ((::System::Void(*)(::E2DE926113CB084F, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + FC0AD3A3857D3EAB_B988BC20FD084E7F_OFFSET))(FF807B1207717EB4, B4119760351B6FB8, E8E4B18F8423D406);
	}
};
