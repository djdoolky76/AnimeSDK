#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AssetState.h"
#include "unitysdk/System/Object.h"
class KDEALCMNBJO;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OPKFBCJBJLH_CCNLJLPLECH_OFFSET UNITYSDK_OFFSET(0x1D638500)
#define OPKFBCJBJLH_CTOR_OFFSET UNITYSDK_OFFSET(0x1D652F60)
#define OPKFBCJBJLH_EKDFCLNLMKK_OFFSET UNITYSDK_OFFSET(0x1D652F50)
#define OPKFBCJBJLH_HAHCGGOAHFK_OFFSET UNITYSDK_OFFSET(0x1D638470)
#define OPKFBCJBJLH_MHHABDHMADJ_OFFSET UNITYSDK_OFFSET(0x1D652F40)

inline static constexpr unsigned int OPKFBCJBJLH_TypeDefinitionIndex = 42373;

	class OPKFBCJBJLH : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::KDEALCMNBJO*>* JDCIIGANNFO; // 0x10
		::KDEALCMNBJO* IHCODOBBNAI; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPKFBCJBJLH_CTOR_OFFSET))(this);
		}

		::KDEALCMNBJO* MHHABDHMADJ()
		{
			return ((::KDEALCMNBJO*(*)(::PVOID))((::PBYTE)hIl2Cpp + OPKFBCJBJLH_MHHABDHMADJ_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::KDEALCMNBJO*>* EKDFCLNLMKK()
		{
			return ((::System::Collections::Generic::List_1<::KDEALCMNBJO*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OPKFBCJBJLH_EKDFCLNLMKK_OFFSET))(this);
		}

		::System::Void HAHCGGOAHFK(::System::String* a1, ::System::UInt32 a2, ::RPG::Client::AssetState a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt32, ::RPG::Client::AssetState))((::PBYTE)hIl2Cpp + OPKFBCJBJLH_HAHCGGOAHFK_OFFSET))(this, a1, a2, a3);
		}

		::System::Void CCNLJLPLECH(::System::String* a1, ::System::UInt32 a2, ::RPG::Client::AssetState a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt32, ::RPG::Client::AssetState))((::PBYTE)hIl2Cpp + OPKFBCJBJLH_CCNLJLPLECH_OFFSET))(this, a1, a2, a3);
		}

	};
