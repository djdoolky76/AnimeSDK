#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E2DE926113CB084F.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BB7311E0B052ED82.h"
#include "unitysdk/FCC2F8EABCD6F945.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BF608870A4FAD234_B19C7C9A6AFA7618_OFFSET UNITYSDK_OFFSET(0x235BE00)
#define BF608870A4FAD234__CCTOR_OFFSET UNITYSDK_OFFSET(0x235BF00)

inline static constexpr unsigned int BF608870A4FAD234_TypeDefinitionIndex = 3224;

class BF608870A4FAD234 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::E2DE926113CB084F, ::System::Object*>** StaticGet_E9290F745A0CB23B()
	{
		return (::System::Collections::Generic::Dictionary_2<::E2DE926113CB084F, ::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(BF608870A4FAD234_TypeDefinitionIndex)->GetStaticField(0x0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BF608870A4FAD234__CCTOR_OFFSET))();
	}

	static ::System::Void B19C7C9A6AFA7618(::BB7311E0B052ED82& B7269378254B3BAC, ::System::String* E4BE39DCCFEB76F1, ::FCC2F8EABCD6F945<::System::Byte> E83E519C5C42896F)
	{
		return ((::System::Void(*)(::BB7311E0B052ED82&, ::System::String*, ::FCC2F8EABCD6F945<::System::Byte>))((::PBYTE)hIl2Cpp + BF608870A4FAD234_B19C7C9A6AFA7618_OFFSET))(B7269378254B3BAC, E4BE39DCCFEB76F1, E83E519C5C42896F);
	}
};
