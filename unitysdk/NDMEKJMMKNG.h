#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Reflection { class FieldInfo; }

#define NDMEKJMMKNG_EEDONFDFLLP_OFFSET UNITYSDK_OFFSET(0xBB503B0)
#define NDMEKJMMKNG_INCJDJFELIK_OFFSET UNITYSDK_OFFSET(0xBB4FAE0)
#define NDMEKJMMKNG_PAKCJDAEPKN_OFFSET UNITYSDK_OFFSET(0xBB4F9F0)

inline static constexpr unsigned int NDMEKJMMKNG_TypeDefinitionIndex = 49150;

	class NDMEKJMMKNG : public ::System::Object
	{
	public:
		static ::System::Void PAKCJDAEPKN(::System::Reflection::FieldInfo* a1, ::System::Object* a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::System::Reflection::FieldInfo*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + NDMEKJMMKNG_PAKCJDAEPKN_OFFSET))(a1, a2, a3);
		}

		static ::System::Void INCJDJFELIK(::System::Object* a1, ::System::Object* a2, ::System::Type* a3, ::System::Int32 a4, ::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Boolean>* a5)
		{
			return ((::System::Void(*)(::System::Object*, ::System::Object*, ::System::Type*, ::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + NDMEKJMMKNG_INCJDJFELIK_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void EEDONFDFLLP(::System::Object* a1, ::System::Object* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::System::Object*, ::System::Object*, ::System::Int32))((::PBYTE)hIl2Cpp + NDMEKJMMKNG_EEDONFDFLLP_OFFSET))(a1, a2, a3);
		}

	};
